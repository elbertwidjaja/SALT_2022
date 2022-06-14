const http = require("http");

const myServer = http.createServer((req, res) => {
    res.end("<h1>Congratulations.. You have passed</h1>");
});

myServer.listen(3000);