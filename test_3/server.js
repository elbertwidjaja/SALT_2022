const http = require("http");

const myServer = http.createServer(function(req, res) {
    res.end("Congratulations.. You have passed");
});

myServer.listen(3000);
