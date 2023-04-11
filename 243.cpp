#include <iostream>
#include <string>

using namespace std;

class Pupil {
    public:
        Pupil(const string& new_Name, const string& new_Surname, const double& new_MathMark, const double& new_RusLangMark, const double& new_PhysicsMark) {
            Name_ = new_Name;
            Surname_ = new_Surname;
            MathMark_ = new_MathMark;
            RusLangMark_ = new_RusLangMark;
            PhysicsMark_ = new_PhysicsMark;
            UpdateAverageMark();
        } //конструктор

        double GetMathMark() const { return MathMark_; } //геттеры
        double GetRusLangMark() const { return RusLangMark_; }
        double GetPhysicsMark() const { return PhysicsMark_; }

        void SetMathMark(double Mark) { MathMark_ = Mark; } //сеттеры
        void SetRusLangMark(double Mark) { RusLangMark_ = Mark; }
        void SetPhysicsMark(double Mark) { PhysicsMark_ = Mark; }

    private:
        void UpdateAverageMark() { AverageMark_ = (MathMark_ + RusLangMark_ + PhysicsMark_) / 3; } //метод определения средней оценки

        string Name_;
        string Surname_;
        double MathMark_;
        double RusLangMark_;
        double PhysicsMark_;
        double AverageMark_;
};
