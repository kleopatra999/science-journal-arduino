/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.5-dev at Tue Oct 27 09:54:57 2015. */

#ifndef PB_SENSOR_PB_H_INCLUDED
#define PB_SENSOR_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _goosci_DataType {
    goosci_DataType_ANALOG = 1,
    goosci_DataType_DIGITAL = 2,
    goosci_DataType_FLOAT = 3,
    goosci_DataType_INT = 4,
    goosci_DataType_STRING = 5
} goosci_DataType;

typedef enum _goosci_Unit_Units_Type {
    goosci_Unit_Units_Type_UNITLESS = 9984,
    goosci_Unit_Units_Type_LENGTH = 9985,
    goosci_Unit_Units_Type_VELOCITY = 10002,
    goosci_Unit_Units_Type_PLANE_ORIENTATION = 10016,
    goosci_Unit_Units_Type_VOLT = 10024,
    goosci_Unit_Units_Type_RPM = 10152
} goosci_Unit_Units_Type;

/* Struct definitions */
typedef struct _goosci_BleSensorConfig {
    pb_callback_t address;
} goosci_BleSensorConfig;

typedef struct _goosci_Empty {
    uint8_t dummy_field;
} goosci_Empty;

typedef struct _goosci_Error {
    pb_callback_t error;
} goosci_Error;

typedef struct _goosci_SensorEnumeration {
    pb_callback_t pin_descriptor;
} goosci_SensorEnumeration;

typedef struct _goosci_StringValue {
    pb_callback_t value;
} goosci_StringValue;

typedef struct _goosci_AnalogExtremum {
    int32_t extremum;
} goosci_AnalogExtremum;

typedef struct _goosci_AnalogPin {
    int32_t pin;
} goosci_AnalogPin;

typedef struct _goosci_AnalogValue {
    uint32_t value;
} goosci_AnalogValue;

typedef struct _goosci_AnalogZero {
    int32_t zero;
} goosci_AnalogZero;

typedef struct _goosci_DigitalPin {
    int32_t pin;
} goosci_DigitalPin;

typedef struct _goosci_DigitalValue {
    bool value;
} goosci_DigitalValue;

typedef struct _goosci_FloatExtremum {
    int32_t extremum;
} goosci_FloatExtremum;

typedef struct _goosci_FloatValue {
    float value;
} goosci_FloatValue;

typedef struct _goosci_FloatZero {
    int32_t zero;
} goosci_FloatZero;

typedef struct _goosci_IntExtremum {
    int32_t extremum;
} goosci_IntExtremum;

typedef struct _goosci_IntValue {
    int32_t value;
} goosci_IntValue;

typedef struct _goosci_IntZero {
    int32_t zero;
} goosci_IntZero;

typedef struct _goosci_Interval {
    int32_t count;
    bool has_frequency;
    int32_t frequency;
} goosci_Interval;

typedef struct _goosci_Unit {
    goosci_Unit_Units_Type units;
} goosci_Unit;

typedef struct _goosci_Version {
    int32_t version;
} goosci_Version;

typedef struct _goosci_VirtualPin {
    int32_t pin;
} goosci_VirtualPin;

typedef struct _goosci_AnalogExtrema {
    bool has_minimum;
    goosci_AnalogExtremum minimum;
    bool has_maximum;
    goosci_AnalogExtremum maximum;
} goosci_AnalogExtrema;

typedef struct _goosci_FloatExtrema {
    bool has_minimum;
    goosci_FloatExtremum minimum;
    bool has_maximum;
    goosci_FloatExtremum maximum;
} goosci_FloatExtrema;

typedef struct _goosci_IntExtrema {
    bool has_minimum;
    goosci_IntExtremum minimum;
    bool has_maximum;
    goosci_IntExtremum maximum;
} goosci_IntExtrema;

typedef struct _goosci_Pin {
    pb_size_t which_pin;
    union {
        goosci_AnalogPin analog_pin;
        goosci_DigitalPin digital_pin;
        goosci_VirtualPin virtual_pin;
    } pin;
} goosci_Pin;

typedef struct _goosci_SensorDataRequest {
    uint32_t timestamp_key;
    goosci_Interval interval;
    pb_callback_t pin;
} goosci_SensorDataRequest;

typedef struct _goosci_Zero {
    pb_size_t which_zero;
    union {
        goosci_AnalogZero analog_zero;
        goosci_FloatZero float_zero;
        goosci_IntZero int_zero;
    } zero;
} goosci_Zero;

typedef struct _goosci_Data {
    goosci_Pin pin;
    pb_size_t which_value;
    union {
        goosci_AnalogValue analog_value;
        goosci_DigitalValue digital_value;
        goosci_FloatValue float_value;
        goosci_IntValue int_value;
        goosci_StringValue string_value;
    } value;
} goosci_Data;

typedef struct _goosci_Range {
    pb_size_t which_extrema;
    union {
        goosci_AnalogExtrema analog_extrema;
        goosci_FloatExtrema float_extrema;
        goosci_IntExtrema int_extrema;
    } extrema;
} goosci_Range;

typedef struct _goosci_AxisConfig {
    bool has_range;
    goosci_Range range;
    bool has_zero_value;
    goosci_Zero zero_value;
} goosci_AxisConfig;

typedef struct _goosci_SensorData {
    uint32_t timestamp_key;
    pb_size_t which_result;
    union {
        goosci_Error error;
        goosci_Data data;
    } result;
} goosci_SensorData;

typedef struct _goosci_ScalarDescriptor {
    pb_callback_t label;
    goosci_DataType type;
    bool has_axis_config;
    goosci_AxisConfig axis_config;
    bool has_unit;
    goosci_Unit unit;
} goosci_ScalarDescriptor;

typedef struct _goosci_PinDescriptor {
    pb_callback_t label;
    goosci_Pin pin;
    goosci_ScalarDescriptor scalar_descriptor;
} goosci_PinDescriptor;

/* Default values for struct fields */
extern const int32_t goosci_Version_version_default;

/* Initializer values for message structs */
#define goosci_Empty_init_default                {0}
#define goosci_Version_init_default              {1}
#define goosci_Unit_init_default                 {(goosci_Unit_Units_Type)0}
#define goosci_AnalogExtremum_init_default       {0}
#define goosci_AnalogZero_init_default           {0}
#define goosci_AnalogExtrema_init_default        {false, goosci_AnalogExtremum_init_default, false, goosci_AnalogExtremum_init_default}
#define goosci_FloatExtremum_init_default        {0}
#define goosci_FloatZero_init_default            {0}
#define goosci_FloatExtrema_init_default         {false, goosci_FloatExtremum_init_default, false, goosci_FloatExtremum_init_default}
#define goosci_IntExtremum_init_default          {0}
#define goosci_IntZero_init_default              {0}
#define goosci_IntExtrema_init_default           {false, goosci_IntExtremum_init_default, false, goosci_IntExtremum_init_default}
#define goosci_Range_init_default                {0, {goosci_AnalogExtrema_init_default}}
#define goosci_Zero_init_default                 {0, {goosci_AnalogZero_init_default}}
#define goosci_AxisConfig_init_default           {false, goosci_Range_init_default, false, goosci_Zero_init_default}
#define goosci_AnalogPin_init_default            {0}
#define goosci_DigitalPin_init_default           {0}
#define goosci_ScalarDescriptor_init_default     {{{NULL}, NULL}, (goosci_DataType)0, false, goosci_AxisConfig_init_default, false, goosci_Unit_init_default}
#define goosci_VirtualPin_init_default           {0}
#define goosci_Pin_init_default                  {0, {goosci_AnalogPin_init_default}}
#define goosci_PinDescriptor_init_default        {{{NULL}, NULL}, goosci_Pin_init_default, goosci_ScalarDescriptor_init_default}
#define goosci_Interval_init_default             {0, false, 0}
#define goosci_SensorDataRequest_init_default    {0, goosci_Interval_init_default, {{NULL}, NULL}}
#define goosci_BleSensorConfig_init_default      {{{NULL}, NULL}}
#define goosci_SensorEnumeration_init_default    {{{NULL}, NULL}}
#define goosci_AnalogValue_init_default          {0}
#define goosci_DigitalValue_init_default         {0}
#define goosci_FloatValue_init_default           {0}
#define goosci_IntValue_init_default             {0}
#define goosci_StringValue_init_default          {{{NULL}, NULL}}
#define goosci_Data_init_default                 {goosci_Pin_init_default, 0, {goosci_AnalogValue_init_default}}
#define goosci_Error_init_default                {{{NULL}, NULL}}
#define goosci_SensorData_init_default           {0, 0, {goosci_Error_init_default}}
#define goosci_Empty_init_zero                   {0}
#define goosci_Version_init_zero                 {0}
#define goosci_Unit_init_zero                    {(goosci_Unit_Units_Type)0}
#define goosci_AnalogExtremum_init_zero          {0}
#define goosci_AnalogZero_init_zero              {0}
#define goosci_AnalogExtrema_init_zero           {false, goosci_AnalogExtremum_init_zero, false, goosci_AnalogExtremum_init_zero}
#define goosci_FloatExtremum_init_zero           {0}
#define goosci_FloatZero_init_zero               {0}
#define goosci_FloatExtrema_init_zero            {false, goosci_FloatExtremum_init_zero, false, goosci_FloatExtremum_init_zero}
#define goosci_IntExtremum_init_zero             {0}
#define goosci_IntZero_init_zero                 {0}
#define goosci_IntExtrema_init_zero              {false, goosci_IntExtremum_init_zero, false, goosci_IntExtremum_init_zero}
#define goosci_Range_init_zero                   {0, {goosci_AnalogExtrema_init_zero}}
#define goosci_Zero_init_zero                    {0, {goosci_AnalogZero_init_zero}}
#define goosci_AxisConfig_init_zero              {false, goosci_Range_init_zero, false, goosci_Zero_init_zero}
#define goosci_AnalogPin_init_zero               {0}
#define goosci_DigitalPin_init_zero              {0}
#define goosci_ScalarDescriptor_init_zero        {{{NULL}, NULL}, (goosci_DataType)0, false, goosci_AxisConfig_init_zero, false, goosci_Unit_init_zero}
#define goosci_VirtualPin_init_zero              {0}
#define goosci_Pin_init_zero                     {0, {goosci_AnalogPin_init_zero}}
#define goosci_PinDescriptor_init_zero           {{{NULL}, NULL}, goosci_Pin_init_zero, goosci_ScalarDescriptor_init_zero}
#define goosci_Interval_init_zero                {0, false, 0}
#define goosci_SensorDataRequest_init_zero       {0, goosci_Interval_init_zero, {{NULL}, NULL}}
#define goosci_BleSensorConfig_init_zero         {{{NULL}, NULL}}
#define goosci_SensorEnumeration_init_zero       {{{NULL}, NULL}}
#define goosci_AnalogValue_init_zero             {0}
#define goosci_DigitalValue_init_zero            {0}
#define goosci_FloatValue_init_zero              {0}
#define goosci_IntValue_init_zero                {0}
#define goosci_StringValue_init_zero             {{{NULL}, NULL}}
#define goosci_Data_init_zero                    {goosci_Pin_init_zero, 0, {goosci_AnalogValue_init_zero}}
#define goosci_Error_init_zero                   {{{NULL}, NULL}}
#define goosci_SensorData_init_zero              {0, 0, {goosci_Error_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define goosci_BleSensorConfig_address_tag       1
#define goosci_Error_error_tag                   1
#define goosci_SensorEnumeration_pin_descriptor_tag 1
#define goosci_StringValue_value_tag             1
#define goosci_AnalogExtremum_extremum_tag       1
#define goosci_AnalogPin_pin_tag                 1
#define goosci_AnalogValue_value_tag             1
#define goosci_AnalogZero_zero_tag               1
#define goosci_DigitalPin_pin_tag                1
#define goosci_DigitalValue_value_tag            1
#define goosci_FloatExtremum_extremum_tag        1
#define goosci_FloatValue_value_tag              1
#define goosci_FloatZero_zero_tag                1
#define goosci_IntExtremum_extremum_tag          1
#define goosci_IntValue_value_tag                1
#define goosci_IntZero_zero_tag                  1
#define goosci_Interval_count_tag                1
#define goosci_Interval_frequency_tag            2
#define goosci_Unit_units_tag                    1
#define goosci_Version_version_tag               1
#define goosci_VirtualPin_pin_tag                1
#define goosci_AnalogExtrema_minimum_tag         1
#define goosci_AnalogExtrema_maximum_tag         2
#define goosci_FloatExtrema_minimum_tag          1
#define goosci_FloatExtrema_maximum_tag          2
#define goosci_IntExtrema_minimum_tag            1
#define goosci_IntExtrema_maximum_tag            2
#define goosci_Pin_analog_pin_tag                10

#define goosci_Pin_digital_pin_tag               11

#define goosci_Pin_virtual_pin_tag               12
#define goosci_SensorDataRequest_timestamp_key_tag 1
#define goosci_SensorDataRequest_interval_tag    2
#define goosci_SensorDataRequest_pin_tag         3
#define goosci_Zero_analog_zero_tag              1

#define goosci_Zero_float_zero_tag               2

#define goosci_Zero_int_zero_tag                 3
#define goosci_Data_analog_value_tag             10

#define goosci_Data_digital_value_tag            11

#define goosci_Data_float_value_tag              12

#define goosci_Data_int_value_tag                13

#define goosci_Data_string_value_tag             14
#define goosci_Data_pin_tag                      1
#define goosci_Range_analog_extrema_tag          1

#define goosci_Range_float_extrema_tag           2

#define goosci_Range_int_extrema_tag             3
#define goosci_AxisConfig_range_tag              1
#define goosci_AxisConfig_zero_value_tag         2
#define goosci_SensorData_error_tag              10

#define goosci_SensorData_data_tag               11
#define goosci_SensorData_timestamp_key_tag      1
#define goosci_ScalarDescriptor_label_tag        1
#define goosci_ScalarDescriptor_type_tag         2
#define goosci_ScalarDescriptor_axis_config_tag  3
#define goosci_ScalarDescriptor_unit_tag         4
#define goosci_PinDescriptor_label_tag           1
#define goosci_PinDescriptor_pin_tag             2
#define goosci_PinDescriptor_scalar_descriptor_tag 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t goosci_Empty_fields[1];
extern const pb_field_t goosci_Version_fields[2];
extern const pb_field_t goosci_Unit_fields[2];
extern const pb_field_t goosci_AnalogExtremum_fields[2];
extern const pb_field_t goosci_AnalogZero_fields[2];
extern const pb_field_t goosci_AnalogExtrema_fields[3];
extern const pb_field_t goosci_FloatExtremum_fields[2];
extern const pb_field_t goosci_FloatZero_fields[2];
extern const pb_field_t goosci_FloatExtrema_fields[3];
extern const pb_field_t goosci_IntExtremum_fields[2];
extern const pb_field_t goosci_IntZero_fields[2];
extern const pb_field_t goosci_IntExtrema_fields[3];
extern const pb_field_t goosci_Range_fields[4];
extern const pb_field_t goosci_Zero_fields[4];
extern const pb_field_t goosci_AxisConfig_fields[3];
extern const pb_field_t goosci_AnalogPin_fields[2];
extern const pb_field_t goosci_DigitalPin_fields[2];
extern const pb_field_t goosci_ScalarDescriptor_fields[5];
extern const pb_field_t goosci_VirtualPin_fields[2];
extern const pb_field_t goosci_Pin_fields[4];
extern const pb_field_t goosci_PinDescriptor_fields[4];
extern const pb_field_t goosci_Interval_fields[3];
extern const pb_field_t goosci_SensorDataRequest_fields[4];
extern const pb_field_t goosci_BleSensorConfig_fields[2];
extern const pb_field_t goosci_SensorEnumeration_fields[2];
extern const pb_field_t goosci_AnalogValue_fields[2];
extern const pb_field_t goosci_DigitalValue_fields[2];
extern const pb_field_t goosci_FloatValue_fields[2];
extern const pb_field_t goosci_IntValue_fields[2];
extern const pb_field_t goosci_StringValue_fields[2];
extern const pb_field_t goosci_Data_fields[7];
extern const pb_field_t goosci_Error_fields[2];
extern const pb_field_t goosci_SensorData_fields[4];

/* Maximum encoded size of messages (where known) */
#define goosci_Empty_size                        0
#define goosci_Version_size                      11
#define goosci_Unit_size                         3
#define goosci_AnalogExtremum_size               11
#define goosci_AnalogZero_size                   11
#define goosci_AnalogExtrema_size                26
#define goosci_FloatExtremum_size                11
#define goosci_FloatZero_size                    11
#define goosci_FloatExtrema_size                 26
#define goosci_IntExtremum_size                  11
#define goosci_IntZero_size                      11
#define goosci_IntExtrema_size                   26
#define goosci_Range_size                        28
#define goosci_Zero_size                         13
#define goosci_AxisConfig_size                   45
#define goosci_AnalogPin_size                    11
#define goosci_DigitalPin_size                   11
#define goosci_VirtualPin_size                   11
#define goosci_Pin_size                          13
#define goosci_Interval_size                     22
#define goosci_AnalogValue_size                  6
#define goosci_DigitalValue_size                 2
#define goosci_FloatValue_size                   5
#define goosci_IntValue_size                     11

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SENSOR_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
