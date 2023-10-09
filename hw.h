import java.io.*;

public class Student {
    private String[] studentInfo;
    private double[] finalGrades;
    private int numStudents;

    // Constructor to initialize the Student object with studentInfo and numStudents
    public Student(String[] studentInfo, int numStudents) {
        this.studentInfo = studentInfo;
        this.numStudents = numStudents;
        this.finalGrades = new double[numStudents];
    }

    // Parameterized constructor to read student information and test grades from a file
    public Student(String fileName, int numStudents) {
        this.numStudents = numStudents;
        this.studentInfo = new String[numStudents];
        this.finalGrades = new double[numStudents];

        try (BufferedReader reader = new BufferedReader(new FileReader(fileName))) {
            String line;
            int i = 0;
            while ((line = reader.readLine()) != null && i < numStudents) {
                String[] parts = line.split(",");
                if (parts.length >= 2) {
                    studentInfo[i] = parts[0].trim();
                    finalGrades[i] = Double.parseDouble(parts[1].trim());
                    i++;
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    // Compute final grades based on a provided formula
    public void computeFinalGrade(String formula) {
        for (int i = 0; i < numStudents; i++) {
            // You need to implement the logic to compute final grades based on the formula
            // For this example, let's assume the formula is a percentage (e.g., "80%")
            double percentage = Double.parseDouble(formula.replace("%", "").trim());
            finalGrades[i] = percentage;
        }
    }

    // Find a student by name and return their index
    public int findStudent(String name) {
        for (int i = 0; i < numStudents; i++) {
            if (studentInfo[i].equalsIgnoreCase(name)) {
                return i;
            }
        }
        return -1; // Student not found
    }
