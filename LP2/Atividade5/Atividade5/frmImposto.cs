using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Atividade5
{
    public partial class Form1 : Form
    {
        double Salb, SalLiq, nFilhos, SalFam, DescINSS, DescIRPF;
        public Form1()
        {
            InitializeComponent();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void backgroundWorker1_DoWork(object sender, DoWorkEventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void btnDesconto_Click(object sender, EventArgs e)
        {
            if (double.TryParse(mtbSalBruto.Text, out Salb) &&
           double.TryParse(mtbNumFilho.Text, out nFilhos) &&
           (rdbHomem.Checked || rdbMulher.Checked))
            {
               
                if (Salb <= 800.47)
                {
                    DescINSS = (7.65 / 100) * Salb;
                    txtAliInss.Text = "7,65%";

                }
                else if (Salb <= 1050)
                {
                    DescINSS = (8.65 / 100) * Salb;
                    txtAliInss.Text = "8,65%";

                }
                else if (Salb <= 1400.77)
                {
                    DescINSS = (9 / 100) * Salb;
                    txtAliInss.Text = "9,00%";

                }
                else if (Salb <= 2801.56)
                {
                    DescINSS = (11 / 100) * Salb;
                    txtAliInss.Text = "11,00%";

                }
                else
                {
                    DescINSS = 308.17;
                    txtAliInss.Text = "Teto";
                }
               
                if (Salb <= 1257.12)
                {
                    txtAliIrpf.Text = "isento";
                    txtDescontoIrpf.Text = "0";
                }
                else if (Salb <= 2512.08)
                {
                    txtAliIrpf.Text = "15,00%";
                    DescIRPF = (15 / 100) * Salb;
                }
                else
                {
                    txtAliIrpf.Text = "27,50%";
                    DescIRPF = (27.5 / 100) * Salb;
                }
                
                if (Salb < 435.52)
                {
                    SalFam = 22.33 * nFilhos;
                }
                else if (Salb <= 654.61)
                {
                    SalFam = 15.74 * nFilhos;
                }
                else
                    SalFam = 0;

            }
            else
            {
                MessageBox.Show("Dados insuficientes");
            }




            SalLiq = Salb + (SalFam) - (DescIRPF + DescINSS);

            txtDescontoIrpf.Text = DescIRPF.ToString();
            txtSalFamilia.Text = SalFam.ToString();
            txtSalLiquido.Text = SalLiq.ToString();
            txtDescontoInss.Text = DescINSS.ToString();
        }
    }
}
