function verificar(){
    var data = new Date()
    var ano = data.getFullYear()
    var fano = document.getElementById('txtano')
    var res = document.querySelector('div#res')
    var img = document.createElement('img')
    if(fano.value.length == 0 || Number(fano.value) > ano){
        window.alert('[ERRO] Verifique os dados e tente novamente!')
    } else {
        var fsex = document.getElementsByName('radsex')
        var idade = ano - Number(fano.value)
        var genero = ''
        if(fsex[0].checked){
            genero = 'Homem'
            if(idade >=0 && idade <10){
                //criança
                img.setAttribute('src','babyboy.png')
            }
            else if(idade < 21){
                //jovem
                img.setAttribute('src','boyteenager.png')
            }else if(idade < 50){
                //adulto
                img.setAttribute('src','men.png')
            }else{
                //idoso
                img.setAttribute('src','oldmen.png')
            }
        } else if(fsex[1].checked){
            genero = 'Mulher'
            if(idade >=0 && idade <10){
                //criança
                img.setAttribute('src','babygirl.png')
            }
            else if(idade<21){
                //jovem
                img.setAttribute('src','girlteenager.png')
            }else if(idade <50){
                //adulto
                img.setAttribute('src','women.png')
            }else{
                //idoso
                img.setAttribute('src','oldwomen.png')
            }
        }
        res.style.textAlign = 'center'
        res.innerHTML = `Detectamos ${genero} com ${idade} anos.`
        res.appendChild(img)
        

    }
}
