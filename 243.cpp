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
        }
        
        double GetMathMark() const { return MathMark_; }
        double GetRusLangMark() const { return RusLangMark_; }
        double GetPhysicsMark() const { return PhysicsMark_; } 
        void SetAverageMark(const double& new_AverageMark) {
            AverageMark_ = new_AverageMark;
            UpdateAverageMark();
        }

    private:
        void UpdateAverageMark() { AverageMark_ = (MathMark_ + RusLangMark_ + PhysicsMark_) / 3; }
        
        string Name_;
        string Surname_;
        double MathMark_;
        double RusLangMark_;
        double PhysicsMark_;
        double AverageMark_;
};