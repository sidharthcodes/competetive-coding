var myBtn = document.createElement('button');
myBtn.id = 'btn';
var i = 0;
myBtn.innerHTML = i;
myBtn.style.width = '96px';
myBtn.style.height = '48px';
myBtn.style.fontsize = '24px';
myBtn.addEventListener('click', () => {
    i += 1;
    myBtn.innerHTML = i;
});

document.body.appendChild(myBtn);