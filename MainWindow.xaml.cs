using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.IO.Ports;
using System.Windows.Markup;
using System.Diagnostics;
using System.Windows.Threading;
using Vives;

namespace Project_ICT_sem1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        SerialPort _serialPort;
        string control = "1";
        bool userTrue = false;
        bool passwordTrue = false;

        public MainWindow()
        {
            InitializeComponent();

            _serialPort = new SerialPort();

            // Optie "None" toevoegen aan de combobox.
            cbxComPorts.Items.Add("None");
            foreach (string s in SerialPort.GetPortNames())
                cbxComPorts.Items.Add(s);

            // Events koppelen aan   
            sldr.ValueChanged += sldr_ValueChanged;
            _serialPort.DataReceived += SerialPort_DataReceived;
        }
        private void cmbxCom_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            if (_serialPort != null)
            {
                if (cbxComPorts.SelectedItem.ToString() != "None")
                {
                    _serialPort.PortName = cbxComPorts.SelectedItem.ToString();
                    _serialPort.Open();
                }
                else
                    _serialPort.Close();
            }
        }
        // Per druk op een toets wordt er gecontrolleerd of er een COM-Poort geselecteerd is en de seriële poort dus open
        // staat. Het is ook niet mogelijk om toetsen in te drukken terwijl er al een noot of muziek speelt, door de control
        // variabele ( wordt verstuurd van de Arduino ).
        // Dit principe wordt bij alle drukken op drukknoppen toegepast.
        private void btnC_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"00{sldr.Value}");
        }

        private void btnD_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"01{sldr.Value}");
        }

        private void btnE_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"02{sldr.Value}");
        }

        private void btnF_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"03{sldr.Value}");
        }

        private void btnG_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"04{sldr.Value}");
        }

        private void btnA_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"05{sldr.Value}");
        }

        private void btnB_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"06{sldr.Value}");
        }

        private void btnCs_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"07{sldr.Value}");
        }

        private void btnDs_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"08{sldr.Value}");
        }

        private void btnFs_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"09{sldr.Value}");
        }
        private void btnGs_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"10{sldr.Value}");
        }
        private void btnAs_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"11{sldr.Value}");
        }
        private void btnC2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"12{sldr.Value}");
        }
        private void btnD2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"13{sldr.Value}");
        }
        private void btnE2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"14{sldr.Value}");
        }
        private void btnF2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"15{sldr.Value}");
        }
        private void btnG2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"16{sldr.Value}");
        }
        private void btnA2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"17{sldr.Value}");
        }
        private void btnB2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"18{sldr.Value}");
        }
        private void btnCs2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"19{sldr.Value}");
        }
        private void btnDs2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"20{sldr.Value}");
        }
        private void btnFs2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"21{sldr.Value}");
        }
        private void btnGs2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"22{sldr.Value}");
        }
        private void btnAs2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"23{sldr.Value}");
        }

        // Deze drukknop test alle toetsen in volgorde.
        private void btn1_Click(object sender, RoutedEventArgs e)
        {
            if ((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"24{sldr.Value}");
        }

        // Deze drukknop speelt 'Merry X-mas'.
        private void btn2_Click(object sender, RoutedEventArgs e)
        {
            if((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"25{sldr.Value}");
        }

        // Deze drukknop speelt 'Ode to Joy'.
        private void btn3_Click(object sender, RoutedEventArgs e)
        {
            if ((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"26{sldr.Value}");
        }

        // Deze drukknop speelt de tetris themesong.
        private void btn4_Click(object sender, RoutedEventArgs e)
        {
            if ((_serialPort.IsOpen) && (control == "1"))
                _serialPort.WriteLine($"27{sldr.Value}");
        }
        
        // Verstuurde data opvangen.
        void SerialPort_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            control = _serialPort.ReadLine().Trim();
        }

        // Wanneer het window sluit, sluit de seriële poort automatisch ook. 
        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            _serialPort.Close();
        }

        // Slidervalue weergeven.
        private void sldr_ValueChanged(object sender, RoutedPropertyChangedEventArgs<double> e)
        {
            lblSldr.Content = $"{sldr.Value} ms";
        }

        private void btnLEAVE_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        // De 'OK-Button' controlleerd of de ingevulde gegevens correct zijn. Dan wordt de knop groen.
        // Anders wordt de knop rood en is de combobox niet bruikbaar.
        private void btnOK_Click(object sender, RoutedEventArgs e)
        {
            User user = new User();
            user.UserName = txtbxName.Text;
            user.Password = passBx.Password;
            if (user.UserName == "Kwinten Declercq" || user.UserName == "Ruben Buysschaert")
                userTrue = true;
            else
                userTrue = false;
            if (user.Password == "1234")
                passwordTrue = true;
            else
                passwordTrue = false;
            if (userTrue && passwordTrue)
            {
                cbxComPorts.IsEnabled = true;
                btnOK.Background = Brushes.LimeGreen;
            }
            else
            {
                cbxComPorts.IsEnabled = false;
                btnOK.Background = Brushes.Red;
            }     
        }
    }
}