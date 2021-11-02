#ifndef DNest5_Template_MyModel_hpp
#define DNest5_Template_MyModel_hpp

#include <cmath>
#include <UniformModel.hpp>
#include <Tools/Misc.hpp>

namespace DNest5_Template
{

using DNest5::ParameterNames, Tools::RNG;

class MyModel
{
    private:

        std::vector<double> team_qualities;
        std::vector<double> driver_qualities;

    public:
        MyModel(RNG& rng);
        void us_to_params();
        double perturb(RNG& rng);
        double log_likelihood() const;
        std::vector<char> to_blob() const;
        void from_blob(const std::vector<char>& blob);
        std::string to_string() const;

        static ParameterNames parameter_names;
};



/* Implementations follow */

ParameterNames MyModel::parameter_names = {};

inline MyModel::MyModel(RNG& rng)
{
}

inline double MyModel::log_likelihood() const
{
    double logl = 0.0;
    return logl;
}

double MyModel::perturb(RNG& rng)
{
    return 0.0;
}

std::vector<char> MyModel::to_blob() const
{
    return {};
}

void MyModel::from_blob(const std::vector<char>& blob)
{

}

std::string MyModel::to_string() const
{
    return "";
}

} // namespace

#endif

