let problems=[];
let elements=document.querySelectorAll("td.id.left");
elements.forEach(
    e=>problems.push(e.innerText)
);
prompt("ctrl+c to copy",String(problems));
