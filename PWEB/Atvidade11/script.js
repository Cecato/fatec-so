
function Retangulo(b, h){

    this.b = b;
    this.h = h;

    this.Area = function(){
        return b * h;
    }

}

var Ex1 = new Retangulo(80,60);

alert(" base: 80  altura: 60");
alert(Ex1.Area());


function Conta(nomeCorrentista, banco, numConta, saldo) {

    this.nomeCorrentista = nomeCorrentista;
    this.banco = banco;
    this.numConta = numConta;
    this.saldo = saldo;

    this.setnomeCorrentista = function(nome) {
        nomeCorrentista = nome;
    }
    this.setBanco = function(nomeBanco) {
        banco = nomeBanco;
    }
    this.setnumConta = function(numConta) {
        numConta = numConta;
    }
    this.setSaldo = function(valor) {
        saldo = valor;
    }
    this.getnomeCorrentista = function() {
       return nomeCorrentista;
    }
    this.getBanco = function() {
        return banco;
    }
    this.getnumConta = function() {
       return numConta;
    }
    this.getSaldo = function() {
        return saldo;
    }

}

function Corrente(saldoEspecial) {
    

    this.saldoEspecial = saldoEspecial;
    this.setSaldoEspecial = function(valor) {
        saldoEspecial = valor;
    }
    this.getSaldoEspecial = function() {
        return saldoEspecial;
    }
}

function Poupanca(juros, dataVencimento) {
   

    this.juros = juros;
    this.dataVencimento = dataVencimento;
    this.setJuros = function(valor) {
        juros = valor;
    }
    this.getJuros = function() {
        return juros;
    }
    this.setdataVencimento= function(data) {
        dataVencimento = data;
    }
    this.getdataVencimento = function() {
        return dataVencimento;
    }
}



Poupanca.prototype = new Conta();
var contaP = new Poupanca();

contaP.setnomeCorrentista('Gugu');
contaP.setBanco('Bradesco');
contaP.setnumConta('777');
contaP.setSaldo('154928022');
contaP.setdataVencimento('01/06/2001');
contaP.setJuros('25%');

Corrente.prototype = new Conta();
var contaC = new Corrente();

contaC.setnomeCorrentista('Ugug');
contaC.setBanco('Sedesco');
contaC.setnumConta('44');
contaC.setSaldo('1');
contaC.setSaldoEspecial('01/02/2006');