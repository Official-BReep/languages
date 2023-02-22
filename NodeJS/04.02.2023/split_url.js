var http = require('http');
var url = require('url');


//example: http://localhost:8080/?year=2017&month=July
http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  var q = url.parse(req.url, true).query; //get url
  var txt = q.year + " " + q.month; //fetch data
  res.end(txt);
}).listen(8080);