var http = require('http');
var url = require('url');
var fs = require('fs');

http.createServer(function (req, res) {
    var q = url.parse(req.url, true);
    var filename = "."+q.pathname;  //get file
    fs.readFile(filename, function(err, data){  //get data from file
        //Error Page
        if (err){
            res.writeHead(404, {'Content-Type': 'text/html'});
            return res.end("404 Not Found");
        }
        res.writeHead(200, {'Content-Type': 'text/html'});
        res.write(data); //show current file
        return res.end();
    });
}).listen(8081) //listen on port 8081