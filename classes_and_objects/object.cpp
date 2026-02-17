student object_student;
class student{
    private:
    int roll_no;
    float marks;
    public:
    void put_data(int r,int m);
    void display();
};

int main(){
    student s1;
    s1.put_data(101, 95.5);
    s1.display();
}