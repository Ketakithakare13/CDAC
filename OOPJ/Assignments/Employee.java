//To Print Employee Details (Assignment No.04)

package org.example1;

import java.util.Scanner;

public class Employee {
	String name;
	int emid;
	String address;
	float salary;
	
	
	public void acceptRecord() {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Name: ");
		this.name = sc.nextLine();
		System.out.println("Employee Id: ");
		this.emid = sc.nextInt();
		sc.nextLine();
		System.out.println("Address: ");
		this.address = sc.nextLine();
		System.out.println("Salary: ");
		this.salary = sc.nextFloat();
		
	}
	
	public void printRecord() {
		
		System.out.println("Name: "+ name);
		System.out.println("Employee Id: "+ emid);
		System.out.println("Address: "+ address);
		System.out.println("Salary: "+ salary);
		
	}
	public static void main(String[] args) {
		Employee emp = new Employee();
		
		emp.acceptRecord();
		emp.printRecord();
	}
}
