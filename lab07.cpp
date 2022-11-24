https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
# include <iostream>
# include <fstream>
# include <string>
# include <vector>

using namespace std;

#include "constants.h" // Contains the proper file name to parse

int checkFileName(string fileName){
    // checkFileName() takes a file name (a string) as input and checks if the 
    // file name has the proper extension.
    // - if the file name has the extension `.ISD` 
    //   (ie the last four characters of the string match the above)
    //   then return the integer 1.
    //      - in this case, cout << "File " << fileName << " has the correct extension." << endl;
    // - if the file name has some other extension, return 0.
    //      - in this case, cout << "ERROR: File " << fileName << " is incorrect format." << endl;

    // Note that `.ISD` is just a file format outputted by some measurement device.
    // You can read this file like you would a normal text document.

    // Insert Solution Here

    
}



vector<vector<double>> getSpectrum(ifstream& inFS){
    // getSpectrum() takes an ifstream by reference as input and returns a vector
    // containing the ordered pairs (wavelength, power). These pairs will be
    // in the form of a double vector with size 2, so you are a returning a 
    // vector containing many double vectors (each with size 2).

    // Note that `.ISD` is just a file format outputted by some measurement device.
    // You can read this file like you would a normal text document.

    // Examine the provided `.ISD` file. The relevant data begins after the line
    // that contains only the word `Data` (which is line 115 in the example - data 
    // begins on line 116 in this example).

    // Store the (wavelength, power) values in a vector (size 2) that is then appended to 
    // the output vector.
    // The wavelength and power values are separated by a tab (`\t`).
    // Stop storing data once you reach a blank line.

    // Return the resulting vector.

    // NOTE: You will need to clear the ifstream and then restart it from the 
    //       begining to do this properly. See the relevant functions given in
    //       lecture for help doing this.

    // Insert Solution Here

    
}

void printSpectrumData(vector<vector<double>> spectrumData){
    // Print the spectrum data in the following format:
    // cout << "Spectrum Data:" << endl;
    // then loop through the spectrum data and print each (wavelength, power) pair like this:
    // cout << "{\t" << wavelength << "\t\t" << power << "\t}" << endl;

    // You will need to index the loop properly to do this
}

double getEQE(ifstream& inFS){
    // getEQE() takes an ifstream by reference as input and returns a double.
    // This double is the numerical value that follows the text 
    // `Calculations/EQE [%]=` in the example `.ISD` file.
    // This occurs on Line 95 in the given example (it may occur on different 
    // lines in some of the other test cases).

    // Note that `.ISD` is just a file format outputted by some measurement device.
    // You can read this file like you would a normal text document.

    // Examine the provided `.ISD` file. Open the file and index through the lines
    // until you find a line containing `Calculations/EQE [%]=`.
    // Store the numeric value that follows on that line
    // (in the given example, this value is 5.9864418825053).

    // Return this value. If there is no such line contained in the data file,
    // return -1.

    // NOTE: You will need to clear the ifstream and then restart it from the 
    //       begining to do this properly. See the relevant functions given in
    //       lecture for help doing this.

    // Insert Solution Here


}

double getWPE(ifstream& inFS){
    // getWPE() takes an ifstream by reference as input and returns a double.
    // This double is the numerical value that follows the text 
    // `Calculations/WPE [%]=` in the example `.ISD` file.
    // This occurs on Line 96 in the given example (it may occur on different 
    // lines in some of the other test cases).

    // Note that `.ISD` is just a file format outputted by some measurement device.
    // You can read this file like you would a normal text document.

    // Examine the provided `.ISD` file. Open the file and index through the lines
    // until you find a line containing `Calculations/WPE [%]=`.
    // Store the numeric value that follows on that line
    // (in the given example, this value is 4.7134080560685).

    // Return this value. If there is no such line contained in the data file,
    // return -1.

    // NOTE: You will need to clear the ifstream and then restart it from the 
    //       begining to do this properly. See the relevant functions given in
    //       lecture for help doing this.

    // Insert Solution Here


}

double getPeakWavelength(vector<vector<double>>& spectrumData){
    // getPeakWavelength() takes a vector of double arrays by reference 
    // as input and returns a double.

    // The input vector of double arrays contain all of the (wavelength, power)
    // pairs read from a file using the getSpectrum() function. You do not need
    // to call that function here - it is assumed that the input vector of double 
    // arrays already stores this data.

    // Iterate through the vector and look for the maximum power value.
    // The power values can be found at index 1 of each array within the
    // input vector.
    // The wavelength values can be found at index 0 of each array within 
    // the input vector.

    // Return the wavelength value corresponding to the maximum power.

    // Insert Solution Here


}

int main(){
    // You will be calling the above functions in the main method here.

    // Note that the file name is stored in the FILENAME variable (a string)
    // that is imported from `constants.h`

    // First, run the checkFileName() function to see if the file has the 
    // correct extension.
    

    // IF THE FILE NAME HAS THE CORRECT EXTENSION:
    // 0. The affirmative message from checkFileName() should print (should be defined in function)
    // 1. Declare an ifstream and open the file
    // 2. Run an error check to verify the file is open
    //    - if the file is NOT open, cout << "Could not open file: " << FILENAME << endl;
    //    - if the file is NOT open, return 1
    // 3. Declare a vector of double vectors and store the results of getSpectrum(<your ifstream>)
    //    in this vector
    // 4. Call the printSpectrum() function with this vector of double vectors as input
    //    to print your spectrum 
    // 5. cout << "EQE: " << getEQE(<your ifstream>) << endl
    // 6. cout << "WPE: " << getWPE(<your ifstream>) << endl
    // 7. cout << "Peak Wavelength [nm]: " << getPeakWavelength(<your ifstream>) << endl;
    // 8. Close your ifstream
    // 9. return 0

    // IF THE FILE NAME DOES NOT HAVE THE CORRECT EXTENSION:
    // - The error message from checkFileName() should print (should be defined in function)
    // - return 1
}