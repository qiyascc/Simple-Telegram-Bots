// C++ ile yazılmıştır.

#include <iostream>
#include <tl-cpputils/telegram.h>

int main() {
    // Token ile botu oluşturun ve çalıştırın
    tl::TelegramBot bot("TOKEN");
    bot.start();

    // /start komutunu kullanarak botun adını gönderin
    bot.command("start", [&](tl::Update update) {
        tl::Api api(bot);
        api.sendMessage(update.message.chat.id, "Merhaba benim adım Qiyas");
    });

    // /link komutunu kullanarak linkli buton gönderin
    bot.command("link", [&](tl::Update update) {
        tl::Api api(bot);
        api.sendMessage(update.message.chat.id, "Butona tıklayın", {}, {
            {
                "type": "button",
                "text": "Tıkla",
                "url": "https://t.me/qiyascc"
            }
        });
    });

    // Botu çalıştırın
    bot.run();
    return 0;
}
