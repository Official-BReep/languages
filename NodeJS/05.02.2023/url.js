var url = require('url');
var adr = 'http://localhost:8080/default.htm?year=2017&month=february';
var q = url.parse(adr, true);

console.log(q.host);    //localhost:8080
console.log(q.pathname);    //resurns /default.htm
console.log(q.search);  //returns ?year=2017&month = february

var qdata = q.query;  //returns object {year:'2017', month: 'february'}
console.log(qdata.month)  //return 'february'