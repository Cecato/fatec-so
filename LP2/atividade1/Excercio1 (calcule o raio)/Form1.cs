using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Excercio1__calcule_o_raio_
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnSair_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtAltura.Clear();
            txtRaio.Clear();
            txtVolume.Clear();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            double x, y,z;

            if (double.TryParse(txtAltura.Text, out x) && (double.TryParse(txtRaio.Text, out y)))
            {
                z = Math.PI * Math.Pow(y, 2) * x;
                txtVolume.Text = z.ToString("N2");
            }
            else
            {
                MessageBox.Show("Digite números");
            }
               
        }
    }
}
