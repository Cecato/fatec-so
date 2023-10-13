using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Atividade2
{
    public partial class frmCalculadora : Form
    {
        string operador;
        int a = 0;
        bool validar = false;

        public frmCalculadora()
        {
            InitializeComponent();


        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void txtTela_TextChanged(object sender, EventArgs e)
        {

        }

        private void frmCalculadora_Load(object sender, EventArgs e)
        {

        }

        private void btnNumerador_Click(object sender, EventArgs e)
        {
            Button bt = (Button)sender;
            txtTela.Text = txtTela.Text + bt.Text;
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            txtTela.Text = "";
            lblResultado.Text = "";
            a = 0;
            validar = false;
        }

        private void btnMais_Click(object sender, EventArgs e)
        {
            if(validar == true)
            {
                a = a + Convert.ToInt32(txtTela.Text);
                lblResultado.Text = Convert.ToString(a) + "+";
                txtTela.Text = "";
                operador = "+";
            }
            else
            {
                lblResultado.Text = txtTela.Text + btnMais.Text;
                a = Convert.ToInt32(txtTela.Text);
                txtTela.Text = "";
                operador = "+";
                validar = true;
            }
        }

        private void btnMenos_Click(object sender, EventArgs e)
        {
            if (validar == true)
            {
                a = a - Convert.ToInt32(txtTela.Text);
                lblResultado.Text = Convert.ToString(a) + "-";
                txtTela.Text = "";
                operador = "-";
            }
            else
            {
                lblResultado.Text = txtTela.Text + btnMenos.Text;
                a = Convert.ToInt32(txtTela.Text);
                txtTela.Text = "";
                operador = "-";
                validar = true;
            }
        }

        private void btnVezes_Click(object sender, EventArgs e)
        {
            if (validar == true)
            {
                a = a * Convert.ToInt32(txtTela.Text);
                lblResultado.Text = Convert.ToString(a) + "x";
                txtTela.Text = "";
                operador = "x";
            }
            else
            {
                lblResultado.Text = txtTela.Text + btnVezes.Text;
                a = Convert.ToInt32(txtTela.Text);
                txtTela.Text = "";
                operador = "x";
                validar = true;
            }

        }

        private void btnDividir_Click(object sender, EventArgs e)
        {
            if (validar == true)
            {
                a = a / Convert.ToInt32(txtTela.Text);
                lblResultado.Text = Convert.ToString(a) + "/";
                txtTela.Text = "";
                operador = "/";
            }
            else
            {
                lblResultado.Text = txtTela.Text + btnDividir.Text;
                a = Convert.ToInt32(txtTela.Text);
                txtTela.Text = "";
                operador = "/";
                validar = true;
            }
        }

        private void btnIgual_Click(object sender, EventArgs e)
        {
            if(operador=="+"){
                lblResultado.Text = lblResultado.Text + txtTela.Text + "=";
                txtTela.Text = Convert.ToString(a+Convert.ToInt32(txtTela.Text));
                lblResultado.Text = "";
                a = 0;
                validar = false;
            }
            else if (operador == "-")
            {
                lblResultado.Text = lblResultado.Text + txtTela.Text + "=";
                txtTela.Text = Convert.ToString(a - Convert.ToInt32(txtTela.Text));
                lblResultado.Text = "";
                a = 0;
                validar = false;
            }
            else if (operador == "x")
            {
                lblResultado.Text = lblResultado.Text + txtTela.Text + "=";
                txtTela.Text = Convert.ToString(a * Convert.ToInt32(txtTela.Text));
                lblResultado.Text = "";
                a = 0;
                validar = false;
            }
            else if (operador == "/")
            {
                lblResultado.Text = lblResultado.Text + txtTela.Text + "=";
                txtTela.Text = Convert.ToString(a / Convert.ToInt32(txtTela.Text));
                lblResultado.Text = "";
                a = 0;
                validar = false;
            }
           
        }

    }
}
