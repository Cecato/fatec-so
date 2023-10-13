function Ativar(){

    let valor1 = parseFloat(document.getElementById('Valor1').value);
    let valor2 = parseFloat(document.getElementById('Valor2').value);
    let valor3 = parseFloat(document.getElementById('Valor3').value);

    alert('Maior valor: ' +  maiorNum(valor1, valor2, valor3));

    alert(ordenado(valor1, valor2, valor3));
    
    
}

function maiorNum(x, y, z){

    var aux = x;

    if( aux < y){
        aux = y;
    }
    if( aux < z){
        aux = z;
    }

    return aux;

}

function ordenado(x, y, z){

    let vetor = [x, y, z];
    vetor.sort((a, b) => a - b);

    return vetor;

}




