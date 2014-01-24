/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package test;

import javax.swing.*;
/**
 *
 * @author aws4y
 */
public class Test {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String inputString;
        String acronym= new String();
        int index=0;
        inputString=JOptionPane.showInputDialog(null, "Enter Three Words:");
        acronym+=inputString.charAt(0);
        while(inputString.charAt(index)!=' ')
        {
            index++;
        if(inputString.length()<index+1)
        {
            JOptionPane.showMessageDialog(null, "Three Words not found.");
           System.exit(0);
        }    
        }
        
        acronym+=inputString.charAt(index+1);
        index++;
        while(inputString.charAt(index)!=' '&& index<inputString.length())
        {
            index++;
            if(inputString.length()<index+1)
        {
            JOptionPane.showMessageDialog(null, "Three Words not found.");
           System.exit(0);
        }
        }
        
        acronym+=inputString.charAt(index+1);
        acronym=acronym.toUpperCase();
        JOptionPane.showMessageDialog(null, "The Acryonm for our input is "+ acronym);
        System.exit(0);
    }
    
}
