def formoutput(pack: dict) -> str:
    msg = "Вот, что нам удалось найти:\n\n\n"
    counter = 1
    for key in pack:
        msg += str(counter) + ". " + str(pack[key]) + "\n\n"
        counter += 1
    msg += "\nВыберите номер снизу, чтобы добавить напоминание за день до события:"

    return msg
