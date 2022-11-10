import datetime
import telebot
from outputformatter import formoutput
from telebot import types
from telegram_bot_calendar import DetailedTelegramCalendar, LSTEP
from kudagogetparams import GeoParams
from kudagogetter import getevents

bot = telebot.TeleBot("5305243158:AAFolonIJY_oG68DGu_X7la6JCVc6cafV0s")


@bot.message_handler(commands=["start"])
def start(message):
    markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
    btnevent = types.KeyboardButton("Найти мероприятия")
    btngeoevent = types.KeyboardButton("Найти мероприятия рядом", request_location=True)
    markup.add(btnevent, btngeoevent)
    bot.send_message(message.chat.id,
                     "Здравствуйте, {0.first_name}!\nВыберите опцию:".format(message.from_user, bot.get_me()),
                     reply_markup=markup)


@bot.message_handler(content_types=['location'])
def location(m):
    if m.location is not None:
        bot.send_message(m.chat.id,
                         "Ищем...",
                         reply_markup=None)
        lon = m.location.longitude
        lat = m.location.latitude
        userloc = GeoParams(lon, lat)
        pack = getevents(geoparams=userloc)
        # ВЫЗОВ kudagogetter'а БЕЗ ДАТЫ
        msg = formoutput(pack)

        markup = types.InlineKeyboardMarkup(row_width=3)

        btn1 = types.InlineKeyboardButton("1", callback_data="1")
        btn2 = types.InlineKeyboardButton("2", callback_data="2")
        btn3 = types.InlineKeyboardButton("3", callback_data="3")
        btn4 = types.InlineKeyboardButton("4", callback_data="4")
        btn5 = types.InlineKeyboardButton("5", callback_data="5")
        btn6 = types.InlineKeyboardButton("6", callback_data="6")

        markup.add(btn1, btn2, btn3, btn4, btn5, btn6)

        bot.send_message(m.chat.id,
                         msg,
                         reply_markup=markup)

    else:
        markup = types.ReplyKeyboardMarkup(resize_keyboard=True)
        btnrestart = types.KeyboardButton("/start")
        markup.add(btnrestart)
        bot.send_message(m.chat.id,
                         "При получении геолокации произошла непредвиденная ошибка!\nПожалуйста, перезапустите бота при помощи\nкоманды /start",
                         reply_markup=markup)


@bot.message_handler(content_types=['text'])
def txt_handler(m):
    if m.text == "Найти мероприятия":
        calendar, step = DetailedTelegramCalendar().build()
        bot.send_message(m.chat.id,
                         f"Select {LSTEP[step]}",
                         reply_markup=calendar)
    else:
        bot.send_message(m.chat.id, "Неизвестная команда!", reply_markup=None)


@bot.callback_query_handler(func=DetailedTelegramCalendar.func())
def cal(c):
    result, key, step = DetailedTelegramCalendar().process(c.data)
    if not result and key:
        bot.edit_message_text(f"Select {LSTEP[step]}",
                              c.message.chat.id,
                              c.message.message_id,
                              reply_markup=key)
    elif result:
        bot.edit_message_text("Ищем...",
                              c.message.chat.id,
                              c.message.message_id)
        resdate = result.strftime("%Y-%m-%d")
        pack = getevents(date=resdate)
        # ВЫЗОВ kudagogetter'а БЕЗ ГЕОЛОКАЦИИ
        msg = formoutput(pack)

        markup = types.InlineKeyboardMarkup(row_width=3)

        btn1 = types.InlineKeyboardButton("1", callback_data="1")
        btn2 = types.InlineKeyboardButton("2", callback_data="2")
        btn3 = types.InlineKeyboardButton("3", callback_data="3")
        btn4 = types.InlineKeyboardButton("4", callback_data="4")
        btn5 = types.InlineKeyboardButton("5", callback_data="5")
        btn6 = types.InlineKeyboardButton("6", callback_data="6")

        markup.add(btn1, btn2, btn3, btn4, btn5, btn6)

        bot.edit_message_text(msg,
                              c.message.chat.id,
                              c.message.message_id,
                              reply_markup=markup)


@bot.callback_query_handler(func=lambda call: True)
def callback_query(call):
    if call.data == "1":
        bot.answer_callback_query(call.id, "Answer is No")
    elif call.data == "2":
        bot.answer_callback_query(call.id, "Answer is No")
    elif call.data == "3":
        bot.answer_callback_query(call.id, "Answer is No")
    elif call.data == "4":
        bot.answer_callback_query(call.id, "Answer is No")
    elif call.data == "5":
        bot.answer_callback_query(call.id, "Answer is No")
    elif call.data == "6":
        bot.answer_callback_query(call.id, "Answer is No")


bot.polling(none_stop=True, interval=0)
