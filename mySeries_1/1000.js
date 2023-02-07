/*
javascript는 백준에서는 노드js로 우회지원이 되서
인풋시스템을 fs 혹은 readline으로 읽어와야 한다.

*/
var fs = require('fs');
var input = fs.readFileSync('/dev/stdin').toString().split(' ');
var a = parseInt(input[0]);
var b = parseInt(input[1]);
console.log(a+b);
