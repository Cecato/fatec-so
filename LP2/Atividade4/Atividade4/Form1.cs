﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Atividade4
{
    public partial class Form1 : Form
    {
        double ladoA, ladoB, ladoC;

        public Form1()
        {
            InitializeComponent();
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtA.Clear();
            txtB.Clear();
            txtC.Clear();
        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            if (double.TryParse(txtA.Text, out ladoA) &&
                double.TryParse(txtB.Text, out ladoB) &&
                double.TryParse(txtC.Text, out ladoC))
            {
                if  (Math.Sqrt((ladoB - ladoC) * (ladoB - ladoC)) < ladoA && ladoA < ladoB + ladoC &&
                    (Math.Sqrt((ladoA - ladoC) * (ladoA - ladoC)) < ladoB && ladoB < ladoA + ladoC &&
                    (Math.Sqrt((ladoA - ladoB) * (ladoA - ladoB)) < ladoC && ladoC < ladoA + ladoB)))
                {
                    if ((ladoA == ladoB) && (ladoC == ladoB))
                    {
                        MessageBox.Show("Equilatero");
                    }
                    else
                    {

                        if ((ladoA != ladoB) && (ladoB != ladoC) && (ladoC != ladoA))
                        { 
                            MessageBox.Show("Escaleno"); 
                        }

                        else
                        {
                            MessageBox.Show("Isósceles");
                        }
                           
                    }
                }
                else
                {
                    MessageBox.Show("Valores inválidos");
                }
                   
            }
            else
            {
                MessageBox.Show("Digite apenas números");
            }
                
        }
    }
}

