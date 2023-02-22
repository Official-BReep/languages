var http = require('http'); //import the http module
var dt = require('./first_(module).js'); //import from own module


//create a server object
http.createServer(function (req, res){
    res.writeHead(200, {'Content-Type': 'text/html'})   //make an html header
    res.write(req.url);   //write a response to the Client
    res.end(); //end the response
}).listen(8080) //listen on port 8080