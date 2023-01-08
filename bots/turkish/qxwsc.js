const Telegraf = require('telegraf');

const bot = new Telegraf('TOKEN');

// Bu fonksiyon /start komutunu kullanarak botun adını gönderir
bot.command('start', (ctx) => ctx.reply('Merhaba benim adım qxwsc'));

// Bu fonksiyon /link komutunu kullanarak linkli buton gönderir
bot.command('link', (ctx) => ctx.reply('Butona tıklayın', Telegraf.Markup
    .inlineKeyboard([
        Telegraf.Markup.urlButton('Tıkla', 'https://t.me/qiyascc')
    ]).extra()
));

bot.launch();
