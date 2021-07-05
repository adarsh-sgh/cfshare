let input=prompt('Paste the problems to import');
let problems=input.split(',');
document.body.innerHTML='';
problems.forEach(
id=>buttonFromId(id)
)

function buttonFromId(problemId){
let link=`https://codeforces.com/contest/${problemId.slice(0,-1)}/problem/${problemId[problemId.length-1]}`
let htmlTemplate=`<a href='${link}'> Problem ${problemId} </a><br><br>`

document.body.innerHTML+=htmlTemplate;
}