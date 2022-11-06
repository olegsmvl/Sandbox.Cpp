#include <iostream>
#include <typeinfo>
using namespace std;

int16_t offset_invert_and_interpolation(int16_t value);

int main(int argc, char const *argv[])
{
    int16_t value = 118;
    int16_t result = offset_invert_and_interpolation(value);
    cout << result << endl;
    cout << typeid(result).name() << endl;
    cout << sizeof(result) << endl;
    return 0;
}

int16_t offset_invert_and_interpolation(int16_t value)
{
  const uint16_t height_sensor_min_ = 38;
  const uint16_t height_sensor_max_ = 170;
  const uint16_t height_min_ = 792;
  const uint16_t height_max_ = 962;

  const int16_t height_offset_ = 0;
  int16_t raw_value_ ;
  bool invert_ = false;

  uint16_t max_height = 240;

  int32_t height_sensor = value;
  if (invert_) {
    height_sensor = max_height - height_sensor;
  }
  raw_value_ = static_cast<int16_t>(height_sensor);
 
  uint16_t delta_max = static_cast<uint16_t>(height_max_ - height_sensor_max_);
  uint16_t delta_min = static_cast<uint16_t>(height_min_ - height_sensor_min_);
 
    cout << "delta_max: " << delta_max << endl;
    cout << "delta_min: " << delta_min << endl;
    cout << "height: " << height_sensor + delta_min << endl;

  int16_t height = static_cast<int16_t>(height_sensor + delta_min +
                                        (delta_max - delta_min) * (height_sensor - height_sensor_min_) /
                                            (height_sensor_max_ - height_sensor_min_));
 
  height = static_cast<int16_t>(height + height_offset_);
  //height = static_cast<int16_t>(height - height_min_);
 
  return static_cast<int16_t>(height);
}
