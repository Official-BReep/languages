var mailer = require('nodemailer');

var transporter = mailer.createTransport({
    service: 'gmail',
    auth: {
        user: 'breep655@gmail.com',
        pass: 'KBbs6yjHUsEZ'
    }
});

var mailOptions = {
    from: 'breep655@gmail.com',
    to: 'breep655@gmail.com',
    subject: 'Sending Email using Node.js',
    text: 'That was easy!' //html: <p>That was easy!</p>
};

transporter.sendMail(mailOptions, function(error, info){
    if (error){
        console.log(error)
    } else {
        console.log('Email: '+ info.response);
    }
});