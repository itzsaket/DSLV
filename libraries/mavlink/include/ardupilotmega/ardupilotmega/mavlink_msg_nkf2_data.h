#pragma once
// MESSAGE NKF2_DATA PACKING

#define MAVLINK_MSG_ID_NKF2_DATA 11098


typedef struct __mavlink_nkf2_data_t {
 uint64_t TimeUS; /*<  microsecond*/
 float innovDragX; /*<  DragX*/
 float innovDragY; /*<  DragY*/
 float innovSideslip; /*<  sideslip*/
 int16_t accbiasX; /*<  AZbias X*/
 int16_t accbiasY; /*<  AZbias Y*/
 int16_t accbiasZ; /*<  AZbias Z*/
 int16_t windN; /*<  wind N*/
 int16_t windE; /*<  wind D*/
 int16_t magN; /*<  magN*/
 int16_t magE; /*<  magE*/
 int16_t magD; /*<  magD*/
 int16_t magX; /*<  magX*/
 int16_t magY; /*<  magY*/
 int16_t magZ; /*<  magZ*/
 uint8_t Core; /*<  core*/
} mavlink_nkf2_data_t;

#define MAVLINK_MSG_ID_NKF2_DATA_LEN 43
#define MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN 43
#define MAVLINK_MSG_ID_11098_LEN 43
#define MAVLINK_MSG_ID_11098_MIN_LEN 43

#define MAVLINK_MSG_ID_NKF2_DATA_CRC 115
#define MAVLINK_MSG_ID_11098_CRC 115



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NKF2_DATA { \
    11098, \
    "NKF2_DATA", \
    16, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_nkf2_data_t, TimeUS) }, \
         { "innovDragX", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_nkf2_data_t, innovDragX) }, \
         { "innovDragY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_nkf2_data_t, innovDragY) }, \
         { "innovSideslip", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_nkf2_data_t, innovSideslip) }, \
         { "accbiasX", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_nkf2_data_t, accbiasX) }, \
         { "accbiasY", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_nkf2_data_t, accbiasY) }, \
         { "accbiasZ", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_nkf2_data_t, accbiasZ) }, \
         { "windN", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_nkf2_data_t, windN) }, \
         { "windE", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_nkf2_data_t, windE) }, \
         { "magN", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_nkf2_data_t, magN) }, \
         { "magE", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_nkf2_data_t, magE) }, \
         { "magD", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_nkf2_data_t, magD) }, \
         { "magX", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_nkf2_data_t, magX) }, \
         { "magY", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_nkf2_data_t, magY) }, \
         { "magZ", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_nkf2_data_t, magZ) }, \
         { "Core", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_nkf2_data_t, Core) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NKF2_DATA { \
    "NKF2_DATA", \
    16, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_nkf2_data_t, TimeUS) }, \
         { "innovDragX", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_nkf2_data_t, innovDragX) }, \
         { "innovDragY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_nkf2_data_t, innovDragY) }, \
         { "innovSideslip", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_nkf2_data_t, innovSideslip) }, \
         { "accbiasX", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_nkf2_data_t, accbiasX) }, \
         { "accbiasY", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_nkf2_data_t, accbiasY) }, \
         { "accbiasZ", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_nkf2_data_t, accbiasZ) }, \
         { "windN", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_nkf2_data_t, windN) }, \
         { "windE", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_nkf2_data_t, windE) }, \
         { "magN", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_nkf2_data_t, magN) }, \
         { "magE", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_nkf2_data_t, magE) }, \
         { "magD", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_nkf2_data_t, magD) }, \
         { "magX", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_nkf2_data_t, magX) }, \
         { "magY", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_nkf2_data_t, magY) }, \
         { "magZ", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_nkf2_data_t, magZ) }, \
         { "Core", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_nkf2_data_t, Core) }, \
         } \
}
#endif

/**
 * @brief Pack a nkf2_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TimeUS  microsecond
 * @param innovDragX  DragX
 * @param innovDragY  DragY
 * @param innovSideslip  sideslip
 * @param accbiasX  AZbias X
 * @param accbiasY  AZbias Y
 * @param accbiasZ  AZbias Z
 * @param windN  wind N
 * @param windE  wind D
 * @param magN  magN
 * @param magE  magE
 * @param magD  magD
 * @param magX  magX
 * @param magY  magY
 * @param magZ  magZ
 * @param Core  core
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nkf2_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NKF2_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_float(buf, 8, innovDragX);
    _mav_put_float(buf, 12, innovDragY);
    _mav_put_float(buf, 16, innovSideslip);
    _mav_put_int16_t(buf, 20, accbiasX);
    _mav_put_int16_t(buf, 22, accbiasY);
    _mav_put_int16_t(buf, 24, accbiasZ);
    _mav_put_int16_t(buf, 26, windN);
    _mav_put_int16_t(buf, 28, windE);
    _mav_put_int16_t(buf, 30, magN);
    _mav_put_int16_t(buf, 32, magE);
    _mav_put_int16_t(buf, 34, magD);
    _mav_put_int16_t(buf, 36, magX);
    _mav_put_int16_t(buf, 38, magY);
    _mav_put_int16_t(buf, 40, magZ);
    _mav_put_uint8_t(buf, 42, Core);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#else
    mavlink_nkf2_data_t packet;
    packet.TimeUS = TimeUS;
    packet.innovDragX = innovDragX;
    packet.innovDragY = innovDragY;
    packet.innovSideslip = innovSideslip;
    packet.accbiasX = accbiasX;
    packet.accbiasY = accbiasY;
    packet.accbiasZ = accbiasZ;
    packet.windN = windN;
    packet.windE = windE;
    packet.magN = magN;
    packet.magE = magE;
    packet.magD = magD;
    packet.magX = magX;
    packet.magY = magY;
    packet.magZ = magZ;
    packet.Core = Core;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NKF2_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
}

/**
 * @brief Pack a nkf2_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param TimeUS  microsecond
 * @param innovDragX  DragX
 * @param innovDragY  DragY
 * @param innovSideslip  sideslip
 * @param accbiasX  AZbias X
 * @param accbiasY  AZbias Y
 * @param accbiasZ  AZbias Z
 * @param windN  wind N
 * @param windE  wind D
 * @param magN  magN
 * @param magE  magE
 * @param magD  magD
 * @param magX  magX
 * @param magY  magY
 * @param magZ  magZ
 * @param Core  core
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nkf2_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NKF2_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_float(buf, 8, innovDragX);
    _mav_put_float(buf, 12, innovDragY);
    _mav_put_float(buf, 16, innovSideslip);
    _mav_put_int16_t(buf, 20, accbiasX);
    _mav_put_int16_t(buf, 22, accbiasY);
    _mav_put_int16_t(buf, 24, accbiasZ);
    _mav_put_int16_t(buf, 26, windN);
    _mav_put_int16_t(buf, 28, windE);
    _mav_put_int16_t(buf, 30, magN);
    _mav_put_int16_t(buf, 32, magE);
    _mav_put_int16_t(buf, 34, magD);
    _mav_put_int16_t(buf, 36, magX);
    _mav_put_int16_t(buf, 38, magY);
    _mav_put_int16_t(buf, 40, magZ);
    _mav_put_uint8_t(buf, 42, Core);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#else
    mavlink_nkf2_data_t packet;
    packet.TimeUS = TimeUS;
    packet.innovDragX = innovDragX;
    packet.innovDragY = innovDragY;
    packet.innovSideslip = innovSideslip;
    packet.accbiasX = accbiasX;
    packet.accbiasY = accbiasY;
    packet.accbiasZ = accbiasZ;
    packet.windN = windN;
    packet.windE = windE;
    packet.magN = magN;
    packet.magE = magE;
    packet.magD = magD;
    packet.magX = magX;
    packet.magY = magY;
    packet.magZ = magZ;
    packet.Core = Core;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NKF2_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#endif
}

/**
 * @brief Pack a nkf2_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TimeUS  microsecond
 * @param innovDragX  DragX
 * @param innovDragY  DragY
 * @param innovSideslip  sideslip
 * @param accbiasX  AZbias X
 * @param accbiasY  AZbias Y
 * @param accbiasZ  AZbias Z
 * @param windN  wind N
 * @param windE  wind D
 * @param magN  magN
 * @param magE  magE
 * @param magD  magD
 * @param magX  magX
 * @param magY  magY
 * @param magZ  magZ
 * @param Core  core
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_nkf2_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TimeUS,float innovDragX,float innovDragY,float innovSideslip,int16_t accbiasX,int16_t accbiasY,int16_t accbiasZ,int16_t windN,int16_t windE,int16_t magN,int16_t magE,int16_t magD,int16_t magX,int16_t magY,int16_t magZ,uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NKF2_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_float(buf, 8, innovDragX);
    _mav_put_float(buf, 12, innovDragY);
    _mav_put_float(buf, 16, innovSideslip);
    _mav_put_int16_t(buf, 20, accbiasX);
    _mav_put_int16_t(buf, 22, accbiasY);
    _mav_put_int16_t(buf, 24, accbiasZ);
    _mav_put_int16_t(buf, 26, windN);
    _mav_put_int16_t(buf, 28, windE);
    _mav_put_int16_t(buf, 30, magN);
    _mav_put_int16_t(buf, 32, magE);
    _mav_put_int16_t(buf, 34, magD);
    _mav_put_int16_t(buf, 36, magX);
    _mav_put_int16_t(buf, 38, magY);
    _mav_put_int16_t(buf, 40, magZ);
    _mav_put_uint8_t(buf, 42, Core);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#else
    mavlink_nkf2_data_t packet;
    packet.TimeUS = TimeUS;
    packet.innovDragX = innovDragX;
    packet.innovDragY = innovDragY;
    packet.innovSideslip = innovSideslip;
    packet.accbiasX = accbiasX;
    packet.accbiasY = accbiasY;
    packet.accbiasZ = accbiasZ;
    packet.windN = windN;
    packet.windE = windE;
    packet.magN = magN;
    packet.magE = magE;
    packet.magD = magD;
    packet.magX = magX;
    packet.magY = magY;
    packet.magZ = magZ;
    packet.Core = Core;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NKF2_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NKF2_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
}

/**
 * @brief Encode a nkf2_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param nkf2_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nkf2_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_nkf2_data_t* nkf2_data)
{
    return mavlink_msg_nkf2_data_pack(system_id, component_id, msg, nkf2_data->TimeUS, nkf2_data->innovDragX, nkf2_data->innovDragY, nkf2_data->innovSideslip, nkf2_data->accbiasX, nkf2_data->accbiasY, nkf2_data->accbiasZ, nkf2_data->windN, nkf2_data->windE, nkf2_data->magN, nkf2_data->magE, nkf2_data->magD, nkf2_data->magX, nkf2_data->magY, nkf2_data->magZ, nkf2_data->Core);
}

/**
 * @brief Encode a nkf2_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param nkf2_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nkf2_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_nkf2_data_t* nkf2_data)
{
    return mavlink_msg_nkf2_data_pack_chan(system_id, component_id, chan, msg, nkf2_data->TimeUS, nkf2_data->innovDragX, nkf2_data->innovDragY, nkf2_data->innovSideslip, nkf2_data->accbiasX, nkf2_data->accbiasY, nkf2_data->accbiasZ, nkf2_data->windN, nkf2_data->windE, nkf2_data->magN, nkf2_data->magE, nkf2_data->magD, nkf2_data->magX, nkf2_data->magY, nkf2_data->magZ, nkf2_data->Core);
}

/**
 * @brief Encode a nkf2_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param nkf2_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_nkf2_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_nkf2_data_t* nkf2_data)
{
    return mavlink_msg_nkf2_data_pack_status(system_id, component_id, _status, msg,  nkf2_data->TimeUS, nkf2_data->innovDragX, nkf2_data->innovDragY, nkf2_data->innovSideslip, nkf2_data->accbiasX, nkf2_data->accbiasY, nkf2_data->accbiasZ, nkf2_data->windN, nkf2_data->windE, nkf2_data->magN, nkf2_data->magE, nkf2_data->magD, nkf2_data->magX, nkf2_data->magY, nkf2_data->magZ, nkf2_data->Core);
}

/**
 * @brief Send a nkf2_data message
 * @param chan MAVLink channel to send the message
 *
 * @param TimeUS  microsecond
 * @param innovDragX  DragX
 * @param innovDragY  DragY
 * @param innovSideslip  sideslip
 * @param accbiasX  AZbias X
 * @param accbiasY  AZbias Y
 * @param accbiasZ  AZbias Z
 * @param windN  wind N
 * @param windE  wind D
 * @param magN  magN
 * @param magE  magE
 * @param magD  magD
 * @param magX  magX
 * @param magY  magY
 * @param magZ  magZ
 * @param Core  core
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_nkf2_data_send(mavlink_channel_t chan, uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NKF2_DATA_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_float(buf, 8, innovDragX);
    _mav_put_float(buf, 12, innovDragY);
    _mav_put_float(buf, 16, innovSideslip);
    _mav_put_int16_t(buf, 20, accbiasX);
    _mav_put_int16_t(buf, 22, accbiasY);
    _mav_put_int16_t(buf, 24, accbiasZ);
    _mav_put_int16_t(buf, 26, windN);
    _mav_put_int16_t(buf, 28, windE);
    _mav_put_int16_t(buf, 30, magN);
    _mav_put_int16_t(buf, 32, magE);
    _mav_put_int16_t(buf, 34, magD);
    _mav_put_int16_t(buf, 36, magX);
    _mav_put_int16_t(buf, 38, magY);
    _mav_put_int16_t(buf, 40, magZ);
    _mav_put_uint8_t(buf, 42, Core);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NKF2_DATA, buf, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#else
    mavlink_nkf2_data_t packet;
    packet.TimeUS = TimeUS;
    packet.innovDragX = innovDragX;
    packet.innovDragY = innovDragY;
    packet.innovSideslip = innovSideslip;
    packet.accbiasX = accbiasX;
    packet.accbiasY = accbiasY;
    packet.accbiasZ = accbiasZ;
    packet.windN = windN;
    packet.windE = windE;
    packet.magN = magN;
    packet.magE = magE;
    packet.magD = magD;
    packet.magX = magX;
    packet.magY = magY;
    packet.magZ = magZ;
    packet.Core = Core;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NKF2_DATA, (const char *)&packet, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#endif
}

/**
 * @brief Send a nkf2_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_nkf2_data_send_struct(mavlink_channel_t chan, const mavlink_nkf2_data_t* nkf2_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_nkf2_data_send(chan, nkf2_data->TimeUS, nkf2_data->innovDragX, nkf2_data->innovDragY, nkf2_data->innovSideslip, nkf2_data->accbiasX, nkf2_data->accbiasY, nkf2_data->accbiasZ, nkf2_data->windN, nkf2_data->windE, nkf2_data->magN, nkf2_data->magE, nkf2_data->magD, nkf2_data->magX, nkf2_data->magY, nkf2_data->magZ, nkf2_data->Core);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NKF2_DATA, (const char *)nkf2_data, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_NKF2_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_nkf2_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_float(buf, 8, innovDragX);
    _mav_put_float(buf, 12, innovDragY);
    _mav_put_float(buf, 16, innovSideslip);
    _mav_put_int16_t(buf, 20, accbiasX);
    _mav_put_int16_t(buf, 22, accbiasY);
    _mav_put_int16_t(buf, 24, accbiasZ);
    _mav_put_int16_t(buf, 26, windN);
    _mav_put_int16_t(buf, 28, windE);
    _mav_put_int16_t(buf, 30, magN);
    _mav_put_int16_t(buf, 32, magE);
    _mav_put_int16_t(buf, 34, magD);
    _mav_put_int16_t(buf, 36, magX);
    _mav_put_int16_t(buf, 38, magY);
    _mav_put_int16_t(buf, 40, magZ);
    _mav_put_uint8_t(buf, 42, Core);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NKF2_DATA, buf, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#else
    mavlink_nkf2_data_t *packet = (mavlink_nkf2_data_t *)msgbuf;
    packet->TimeUS = TimeUS;
    packet->innovDragX = innovDragX;
    packet->innovDragY = innovDragY;
    packet->innovSideslip = innovSideslip;
    packet->accbiasX = accbiasX;
    packet->accbiasY = accbiasY;
    packet->accbiasZ = accbiasZ;
    packet->windN = windN;
    packet->windE = windE;
    packet->magN = magN;
    packet->magE = magE;
    packet->magD = magD;
    packet->magX = magX;
    packet->magY = magY;
    packet->magZ = magZ;
    packet->Core = Core;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NKF2_DATA, (const char *)packet, MAVLINK_MSG_ID_NKF2_DATA_MIN_LEN, MAVLINK_MSG_ID_NKF2_DATA_LEN, MAVLINK_MSG_ID_NKF2_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE NKF2_DATA UNPACKING


/**
 * @brief Get field TimeUS from nkf2_data message
 *
 * @return  microsecond
 */
static inline uint64_t mavlink_msg_nkf2_data_get_TimeUS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field innovDragX from nkf2_data message
 *
 * @return  DragX
 */
static inline float mavlink_msg_nkf2_data_get_innovDragX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field innovDragY from nkf2_data message
 *
 * @return  DragY
 */
static inline float mavlink_msg_nkf2_data_get_innovDragY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field innovSideslip from nkf2_data message
 *
 * @return  sideslip
 */
static inline float mavlink_msg_nkf2_data_get_innovSideslip(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field accbiasX from nkf2_data message
 *
 * @return  AZbias X
 */
static inline int16_t mavlink_msg_nkf2_data_get_accbiasX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field accbiasY from nkf2_data message
 *
 * @return  AZbias Y
 */
static inline int16_t mavlink_msg_nkf2_data_get_accbiasY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field accbiasZ from nkf2_data message
 *
 * @return  AZbias Z
 */
static inline int16_t mavlink_msg_nkf2_data_get_accbiasZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field windN from nkf2_data message
 *
 * @return  wind N
 */
static inline int16_t mavlink_msg_nkf2_data_get_windN(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field windE from nkf2_data message
 *
 * @return  wind D
 */
static inline int16_t mavlink_msg_nkf2_data_get_windE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field magN from nkf2_data message
 *
 * @return  magN
 */
static inline int16_t mavlink_msg_nkf2_data_get_magN(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field magE from nkf2_data message
 *
 * @return  magE
 */
static inline int16_t mavlink_msg_nkf2_data_get_magE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field magD from nkf2_data message
 *
 * @return  magD
 */
static inline int16_t mavlink_msg_nkf2_data_get_magD(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field magX from nkf2_data message
 *
 * @return  magX
 */
static inline int16_t mavlink_msg_nkf2_data_get_magX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field magY from nkf2_data message
 *
 * @return  magY
 */
static inline int16_t mavlink_msg_nkf2_data_get_magY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field magZ from nkf2_data message
 *
 * @return  magZ
 */
static inline int16_t mavlink_msg_nkf2_data_get_magZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field Core from nkf2_data message
 *
 * @return  core
 */
static inline uint8_t mavlink_msg_nkf2_data_get_Core(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Decode a nkf2_data message into a struct
 *
 * @param msg The message to decode
 * @param nkf2_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_nkf2_data_decode(const mavlink_message_t* msg, mavlink_nkf2_data_t* nkf2_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    nkf2_data->TimeUS = mavlink_msg_nkf2_data_get_TimeUS(msg);
    nkf2_data->innovDragX = mavlink_msg_nkf2_data_get_innovDragX(msg);
    nkf2_data->innovDragY = mavlink_msg_nkf2_data_get_innovDragY(msg);
    nkf2_data->innovSideslip = mavlink_msg_nkf2_data_get_innovSideslip(msg);
    nkf2_data->accbiasX = mavlink_msg_nkf2_data_get_accbiasX(msg);
    nkf2_data->accbiasY = mavlink_msg_nkf2_data_get_accbiasY(msg);
    nkf2_data->accbiasZ = mavlink_msg_nkf2_data_get_accbiasZ(msg);
    nkf2_data->windN = mavlink_msg_nkf2_data_get_windN(msg);
    nkf2_data->windE = mavlink_msg_nkf2_data_get_windE(msg);
    nkf2_data->magN = mavlink_msg_nkf2_data_get_magN(msg);
    nkf2_data->magE = mavlink_msg_nkf2_data_get_magE(msg);
    nkf2_data->magD = mavlink_msg_nkf2_data_get_magD(msg);
    nkf2_data->magX = mavlink_msg_nkf2_data_get_magX(msg);
    nkf2_data->magY = mavlink_msg_nkf2_data_get_magY(msg);
    nkf2_data->magZ = mavlink_msg_nkf2_data_get_magZ(msg);
    nkf2_data->Core = mavlink_msg_nkf2_data_get_Core(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NKF2_DATA_LEN? msg->len : MAVLINK_MSG_ID_NKF2_DATA_LEN;
        memset(nkf2_data, 0, MAVLINK_MSG_ID_NKF2_DATA_LEN);
    memcpy(nkf2_data, _MAV_PAYLOAD(msg), len);
#endif
}
