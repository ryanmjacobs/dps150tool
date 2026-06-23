#ifndef USAGE_H
#define USAGE_H

static const char *DETAILED_USAGE =
"OPTIONS\n"
"  -h              Display this help message\n"
"  -d <device>     Specify the serial device (default: /dev/ttyUSB0)\n"
"  -u <voltage>    Set output voltage (0.0 to 30.0 V)\n"
"  -i <current>    Set output current (0.0 to 5.0 A)\n"
"  -x 0,1          Disable or enable Over Voltage Protection (OVP)\n"
"  -y 0,1          Disable or enable Over Current Protection (OCP)\n"
"  -o 0,1          Turn output OFF (0) or ON (1)\n"
"  -U              Read and display current output voltage\n"
"  -I              Read and display current output current\n"
"  -V              Read and display device information (model, firmware, hardware)\n"
"  -z              Do not send disconnect command before closing the port\n"
"  -v              Debug output\n\n"

"EXAMPLES\n"
"  Set voltage to 12V and enable output:\n"
"    ./dps150tool -u 12.0 -o 1\n\n"

"  Set voltage and current, enable output, and turn on OVP:\n"
"    ./dps150tool -u 5.0 -i 1.0 -x 1 -o 1\n\n"

"  Query output voltage and current:\n"
"    ./dps150tool -U -I\n\n"

"  Display device information:\n"
"    ./dps150tool -V\n\n"

"  Use alternative device path and skip disconnect command:\n"
"    ./dps150tool -d /dev/ttyUSB1 -z\n";

#endif /* USAGE_H */
