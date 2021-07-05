## How To Save Bookmarklets
1. Press ctrl+shift+b to display bookmark bar
2. Drag these import and export links to bookmark bar.

[IMPORT](javascript:(function() {let input=prompt('Paste the problems to import');let problems=input.split(',');document.body.innerHTML='';problems.forEach(id=>buttonFromId(id));function buttonFromId(problemId){let link=`https://codeforces.com/contest/${problemId.slice(0,-1)}/problem/${problemId[problemId.length-1]}`;let htmlTemplate=`<a href='${link}'> Problem ${problemId} </a><br><br>`;document.body.innerHTML+=htmlTemplate;}    })())  

[EXPORT](javascript:(function () {let problems=[];let elements=document.querySelectorAll('td.id.left');elements.forEach(e=>problems.push(e.innerText));prompt('ctrl+c to copy',String(problems))})())  

## How To Export Favourite Questions 
1. Go To https://codeforces.com/favourite/problems
2. Click on Export Bookmarklet Link
3. Copy and share the text containing list of problems

## How To Import 
1. click on import bookmarklet 
2. use the text from step 3 when prompted
