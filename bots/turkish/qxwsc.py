import telegram
from telegram.ext import Updater, CommandHandler

def start(update, context):
    context.bot.send_message(chat_id=update.effective_chat.id, text="Merhaba benim adım qxwsc")
    context.bot.send_message(chat_id=update.effective_chat.id, text="Tıkla:", reply_markup=telegram.InlineKeyboardMarkup([[telegram.InlineKeyboardButton(text="Link", url="https://t.me/qiyascc")]]))

updater = Updater('TOKEN', use_context=True)

start_handler = CommandHandler('start', start)
updater.dispatcher.add_handler(start_handler)

updater.start_polling()
