var http = require('http');
var formidable = require('formidable');
var fs = require("fs")

http.createServer(function (req, res){
    if (req.url == "/upload"){
        var form = new formidable.IncomingForm();
        form.parse(req, function (err, fields, files){
            var oldpath = files.filetoupload.filepath; //get old path
            var newpath = "./" + files.filetoupload.originalFilename; //save file in current script path
            fs.rename(oldpath, newpath, function(err){
                if (err) throw err;
                res.writeHead(200, {'Content-Type': 'text/html'})
                res.write("File uploaded");
                res.end();
            })
        });
    } else {
        res.writeHead(200, {'Content-Type': 'text/html'})
        res.write('<form action="upload" method="post" enctype="multipart/form-data">');
        res.write('<input type="file" name="filetoupload"><br>');
        res.write('<input type="submit">');
        res.write('</form>');
        return res.end();
    }
}).listen(8080); //run on port 8080