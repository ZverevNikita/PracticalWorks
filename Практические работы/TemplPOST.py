from telegram import Location


class TemplPOST:
    userId: int
    chatId: int
    eventTitle: str
    eventDate: str
    eventLocation: Location
    picLink: str

    def __init__(self, UI, CI, T, D, L, P):
        self.userId = UI
        self.chatId = CI
        self.eventTitle = T
        self.eventDate = D
        self.eventLocation = L
        self.picLink = P
