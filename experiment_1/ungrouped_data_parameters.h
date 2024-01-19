// ANALYSIS OF GROUPED DATA

#pragma once

// struct containing all the mean values
typedef struct {
    float arithmatic_mean;
    float geometric_mean;
    float harmonic_mean;
    float weighted_mean;
} mean;

// struct containing all the dispersion values
typedef struct {
    float range;
    float interquartile_range;
    float variance;
    float standard_deviation;
    float coefficient_of_variation;
} dispersion;

// struct containing all the shape values
typedef struct {
    float skewness;
    float kurtosis;
} shape;

// struct containing all the position values
typedef struct {
    float percentile;
    float quartile;
    float decile;
} position;

// struct containing all the correlation values
typedef struct {
    float covariance;
    float correlation_coefficient;
} correlation;




// Struct containing all the statistical properties
typedef struct {
    int n;                  // number of data points
    mean mean;              // mean values
    float median;           // median value
    float mode;             // mode value
    dispersion dispersion;  // dispersion values
    shape shape;            // shape values
    position position;      // position values
    correlation correlation;// correlation values
} statistical_properties;