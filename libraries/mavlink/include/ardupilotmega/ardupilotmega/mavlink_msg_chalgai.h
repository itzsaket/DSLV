#pragma once
// MESSAGE CHALGAI PACKING

#define MAVLINK_MSG_ID_CHALGAI 11045


typedef struct __mavlink_chalgai_t {
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
} mavlink_chalgai_t;

#define MAVLINK_MSG_ID_CHALGAI_LEN 43
#define MAVLINK_MSG_ID_CHALGAI_MIN_LEN 43
#define MAVLINK_MSG_ID_11045_LEN 43
#define MAVLINK_MSG_ID_11045_MIN_LEN 43

#define MAVLINK_MSG_ID_CHALGAI_CRC 81
#define MAVLINK_MSG_ID_11045_CRC 81



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CHALGAI { \
    11045, \
    "CHALGAI", \
    16, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_chalgai_t, TimeUS) }, \
         { "innovDragX", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_chalgai_t, innovDragX) }, \
         { "innovDragY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_chalgai_t, innovDragY) }, \
         { "innovSideslip", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_chalgai_t, innovSideslip) }, \
         { "accbiasX", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_chalgai_t, accbiasX) }, \
         { "accbiasY", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_chalgai_t, accbiasY) }, \
         { "accbiasZ", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_chalgai_t, accbiasZ) }, \
         { "windN", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_chalgai_t, windN) }, \
         { "windE", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_chalgai_t, windE) }, \
         { "magN", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_chalgai_t, magN) }, \
         { "magE", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_chalgai_t, magE) }, \
         { "magD", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_chalgai_t, magD) }, \
         { "magX", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_chalgai_t, magX) }, \
         { "magY", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_chalgai_t, magY) }, \
         { "magZ", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_chalgai_t, magZ) }, \
         { "Core", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_chalgai_t, Core) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CHALGAI { \
    "CHALGAI", \
    16, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_chalgai_t, TimeUS) }, \
         { "innovDragX", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_chalgai_t, innovDragX) }, \
         { "innovDragY", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_chalgai_t, innovDragY) }, \
         { "innovSideslip", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_chalgai_t, innovSideslip) }, \
         { "accbiasX", NULL, MAVLINK_TYPE_INT16_T, 0, 20, offsetof(mavlink_chalgai_t, accbiasX) }, \
         { "accbiasY", NULL, MAVLINK_TYPE_INT16_T, 0, 22, offsetof(mavlink_chalgai_t, accbiasY) }, \
         { "accbiasZ", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_chalgai_t, accbiasZ) }, \
         { "windN", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_chalgai_t, windN) }, \
         { "windE", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_chalgai_t, windE) }, \
         { "magN", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_chalgai_t, magN) }, \
         { "magE", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_chalgai_t, magE) }, \
         { "magD", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_chalgai_t, magD) }, \
         { "magX", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_chalgai_t, magX) }, \
         { "magY", NULL, MAVLINK_TYPE_INT16_T, 0, 38, offsetof(mavlink_chalgai_t, magY) }, \
         { "magZ", NULL, MAVLINK_TYPE_INT16_T, 0, 40, offsetof(mavlink_chalgai_t, magZ) }, \
         { "Core", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_chalgai_t, Core) }, \
         } \
}
#endif

/**
 * @brief Pack a chalgai message
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
static inline uint16_t mavlink_msg_chalgai_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHALGAI_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHALGAI_LEN);
#else
    mavlink_chalgai_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CHALGAI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CHALGAI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
}

/**
 * @brief Pack a chalgai message
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
static inline uint16_t mavlink_msg_chalgai_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHALGAI_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHALGAI_LEN);
#else
    mavlink_chalgai_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CHALGAI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CHALGAI;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN);
#endif
}

/**
 * @brief Pack a chalgai message on a channel
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
static inline uint16_t mavlink_msg_chalgai_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TimeUS,float innovDragX,float innovDragY,float innovSideslip,int16_t accbiasX,int16_t accbiasY,int16_t accbiasZ,int16_t windN,int16_t windE,int16_t magN,int16_t magE,int16_t magD,int16_t magX,int16_t magY,int16_t magZ,uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHALGAI_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHALGAI_LEN);
#else
    mavlink_chalgai_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CHALGAI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CHALGAI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
}

/**
 * @brief Encode a chalgai struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param chalgai C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_chalgai_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_chalgai_t* chalgai)
{
    return mavlink_msg_chalgai_pack(system_id, component_id, msg, chalgai->TimeUS, chalgai->innovDragX, chalgai->innovDragY, chalgai->innovSideslip, chalgai->accbiasX, chalgai->accbiasY, chalgai->accbiasZ, chalgai->windN, chalgai->windE, chalgai->magN, chalgai->magE, chalgai->magD, chalgai->magX, chalgai->magY, chalgai->magZ, chalgai->Core);
}

/**
 * @brief Encode a chalgai struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param chalgai C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_chalgai_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_chalgai_t* chalgai)
{
    return mavlink_msg_chalgai_pack_chan(system_id, component_id, chan, msg, chalgai->TimeUS, chalgai->innovDragX, chalgai->innovDragY, chalgai->innovSideslip, chalgai->accbiasX, chalgai->accbiasY, chalgai->accbiasZ, chalgai->windN, chalgai->windE, chalgai->magN, chalgai->magE, chalgai->magD, chalgai->magX, chalgai->magY, chalgai->magZ, chalgai->Core);
}

/**
 * @brief Encode a chalgai struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param chalgai C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_chalgai_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_chalgai_t* chalgai)
{
    return mavlink_msg_chalgai_pack_status(system_id, component_id, _status, msg,  chalgai->TimeUS, chalgai->innovDragX, chalgai->innovDragY, chalgai->innovSideslip, chalgai->accbiasX, chalgai->accbiasY, chalgai->accbiasZ, chalgai->windN, chalgai->windE, chalgai->magN, chalgai->magE, chalgai->magD, chalgai->magX, chalgai->magY, chalgai->magZ, chalgai->Core);
}

/**
 * @brief Send a chalgai message
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

static inline void mavlink_msg_chalgai_send(mavlink_channel_t chan, uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CHALGAI_LEN];
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHALGAI, buf, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#else
    mavlink_chalgai_t packet;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHALGAI, (const char *)&packet, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#endif
}

/**
 * @brief Send a chalgai message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_chalgai_send_struct(mavlink_channel_t chan, const mavlink_chalgai_t* chalgai)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_chalgai_send(chan, chalgai->TimeUS, chalgai->innovDragX, chalgai->innovDragY, chalgai->innovSideslip, chalgai->accbiasX, chalgai->accbiasY, chalgai->accbiasZ, chalgai->windN, chalgai->windE, chalgai->magN, chalgai->magE, chalgai->magD, chalgai->magX, chalgai->magY, chalgai->magZ, chalgai->Core);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHALGAI, (const char *)chalgai, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#endif
}

#if MAVLINK_MSG_ID_CHALGAI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_chalgai_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TimeUS, float innovDragX, float innovDragY, float innovSideslip, int16_t accbiasX, int16_t accbiasY, int16_t accbiasZ, int16_t windN, int16_t windE, int16_t magN, int16_t magE, int16_t magD, int16_t magX, int16_t magY, int16_t magZ, uint8_t Core)
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHALGAI, buf, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#else
    mavlink_chalgai_t *packet = (mavlink_chalgai_t *)msgbuf;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CHALGAI, (const char *)packet, MAVLINK_MSG_ID_CHALGAI_MIN_LEN, MAVLINK_MSG_ID_CHALGAI_LEN, MAVLINK_MSG_ID_CHALGAI_CRC);
#endif
}
#endif

#endif

// MESSAGE CHALGAI UNPACKING


/**
 * @brief Get field TimeUS from chalgai message
 *
 * @return  microsecond
 */
static inline uint64_t mavlink_msg_chalgai_get_TimeUS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field innovDragX from chalgai message
 *
 * @return  DragX
 */
static inline float mavlink_msg_chalgai_get_innovDragX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field innovDragY from chalgai message
 *
 * @return  DragY
 */
static inline float mavlink_msg_chalgai_get_innovDragY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field innovSideslip from chalgai message
 *
 * @return  sideslip
 */
static inline float mavlink_msg_chalgai_get_innovSideslip(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field accbiasX from chalgai message
 *
 * @return  AZbias X
 */
static inline int16_t mavlink_msg_chalgai_get_accbiasX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  20);
}

/**
 * @brief Get field accbiasY from chalgai message
 *
 * @return  AZbias Y
 */
static inline int16_t mavlink_msg_chalgai_get_accbiasY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  22);
}

/**
 * @brief Get field accbiasZ from chalgai message
 *
 * @return  AZbias Z
 */
static inline int16_t mavlink_msg_chalgai_get_accbiasZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field windN from chalgai message
 *
 * @return  wind N
 */
static inline int16_t mavlink_msg_chalgai_get_windN(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field windE from chalgai message
 *
 * @return  wind D
 */
static inline int16_t mavlink_msg_chalgai_get_windE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field magN from chalgai message
 *
 * @return  magN
 */
static inline int16_t mavlink_msg_chalgai_get_magN(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field magE from chalgai message
 *
 * @return  magE
 */
static inline int16_t mavlink_msg_chalgai_get_magE(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field magD from chalgai message
 *
 * @return  magD
 */
static inline int16_t mavlink_msg_chalgai_get_magD(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field magX from chalgai message
 *
 * @return  magX
 */
static inline int16_t mavlink_msg_chalgai_get_magX(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field magY from chalgai message
 *
 * @return  magY
 */
static inline int16_t mavlink_msg_chalgai_get_magY(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  38);
}

/**
 * @brief Get field magZ from chalgai message
 *
 * @return  magZ
 */
static inline int16_t mavlink_msg_chalgai_get_magZ(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  40);
}

/**
 * @brief Get field Core from chalgai message
 *
 * @return  core
 */
static inline uint8_t mavlink_msg_chalgai_get_Core(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Decode a chalgai message into a struct
 *
 * @param msg The message to decode
 * @param chalgai C-struct to decode the message contents into
 */
static inline void mavlink_msg_chalgai_decode(const mavlink_message_t* msg, mavlink_chalgai_t* chalgai)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    chalgai->TimeUS = mavlink_msg_chalgai_get_TimeUS(msg);
    chalgai->innovDragX = mavlink_msg_chalgai_get_innovDragX(msg);
    chalgai->innovDragY = mavlink_msg_chalgai_get_innovDragY(msg);
    chalgai->innovSideslip = mavlink_msg_chalgai_get_innovSideslip(msg);
    chalgai->accbiasX = mavlink_msg_chalgai_get_accbiasX(msg);
    chalgai->accbiasY = mavlink_msg_chalgai_get_accbiasY(msg);
    chalgai->accbiasZ = mavlink_msg_chalgai_get_accbiasZ(msg);
    chalgai->windN = mavlink_msg_chalgai_get_windN(msg);
    chalgai->windE = mavlink_msg_chalgai_get_windE(msg);
    chalgai->magN = mavlink_msg_chalgai_get_magN(msg);
    chalgai->magE = mavlink_msg_chalgai_get_magE(msg);
    chalgai->magD = mavlink_msg_chalgai_get_magD(msg);
    chalgai->magX = mavlink_msg_chalgai_get_magX(msg);
    chalgai->magY = mavlink_msg_chalgai_get_magY(msg);
    chalgai->magZ = mavlink_msg_chalgai_get_magZ(msg);
    chalgai->Core = mavlink_msg_chalgai_get_Core(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CHALGAI_LEN? msg->len : MAVLINK_MSG_ID_CHALGAI_LEN;
        memset(chalgai, 0, MAVLINK_MSG_ID_CHALGAI_LEN);
    memcpy(chalgai, _MAV_PAYLOAD(msg), len);
#endif
}
