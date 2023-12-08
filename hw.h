import java.util.Arrays;

public class Student {
    private String[] studentInfo;
    private String[] testGrade;
    private int numStudents;

            /*Include here your private members */
    public Student() {
        // Default constructor
    }

            /*Include here your public members */
    public Student(String[] studentInfo, String[] testGrade) {
        this.studentInfo = studentInfo;
        this.testGrade = testGrade;
        this.numStudents = studentInfo.length; // Assuming studentInfo and testGrade have the same length
    }


    public static void main(String[] args) throws Exception {
    public void computeFinalGrade(String studentName) {
        int studentIndex = findStudent(studentName);
        if (studentIndex != -1) {
            // Calculate the final grade for the student (you can implement your logic here)
            System.out.println("Final grade for " + studentName + " is calculated.");
        } else {
            System.out.println(studentName + " not found in the list.");
        }
    }

        /*Write here your main code*/
    public int findStudent(String studentName) {
        for (int i = 0; i < numStudents; i++) {
            if (studentInfo[i].equals(studentName)) {
                return i; // Found the student
            }
        }
        return -1; // Student not found
    }

    public static void main(String[] args) {
        String[] studentNames = {"Ashley", "Greg", "Chris", "David"};
        String[] testGrades = {"A", "B", "C", "D"};
        Student studentList = new Student(studentNames, testGrades);

        // Example: Compute final grade for a student
        studentList.computeFinalGrade("Ashley");

        // Example: Find a student in the list
        int index = studentList.findStudent("Greg");
        if (index != -1) {
            System.out.println("Greg found at index " + index );
        } else {
            System.out.println("Greg not found in the list.");
        }
    }
}
