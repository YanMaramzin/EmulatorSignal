#pragma once

class CustomGeneratorParametrs
{
public:
    CustomGeneratorParametrs();
    virtual ~CustomGeneratorParametrs();

    double frequency() const;
    double amplitude() const;
    double phase() const;
    double step() const;

    void setFrequency(double frequency);
    void setAmplitude(double amplitude);

private:
    double m_frequency {100.0};
    double m_amplitude {50.0};
    double m_phase {0.0};
    double m_step {1 / 1000.0};
};
