/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.dishes;

/**
 *
 * @author ASDF
 */import java.util.Scanner;
public class Dishes {
  private String dishtype;
   private String Ingredents;
    private String cusine;
   
    public static void main(String[] args) {
        Dishes dish =new Dishes();
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the type of Dish");
        dish.dishtype = input.nextLine();
        System.out.println("Enter the Ingredients of the dishes");
        dish.Ingredents = input.nextLine();
        System.out.println("Enter the Cusine");
        dish.cusine = input.nextLine();
        System.out.println("Welcome to the Restuarant");
        System.out.println("Your selected type of the Dish is " + dish.dishtype+ "." );
        System.out.println("Your Dish have Following Ingredients: " + dish.Ingredents + ".");
        System.out.println("Your Dish belongs to the: " + dish.cusine + "." );
        
        
    }
}

