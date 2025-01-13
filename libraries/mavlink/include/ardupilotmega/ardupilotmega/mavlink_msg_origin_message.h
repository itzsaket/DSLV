#pragma once
// MESSAGE ORIGIN_MESSAGE PACKING

#define MAVLINK_MSG_ID_ORIGIN_MESSAGE 52311


typedef struct __mavlink_origin_message_t {
 uint64_t TimeUS; /*<   Time.*/
 int32_t Lat; /*<   Origin Latitude.*/
 int32_t Lon; /*<   Origin Longitude.*/
 int32_t Alt; /*<   Origin Altitude.*/
 uint8_t Type; /*<   Origin Type.*/
} mavlink_origin_message_t;

#define MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN 21
#define MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN 21
#define MAVLINK_MSG_ID_52311_LEN 21
#define MAVLINK_MSG_ID_52311_MIN_LEN 21

#define MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC 0
#define MAVLINK_MSG_ID_52311_CRC 0



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ORIGIN_MESSAGE { \
    52311, \
    "ORIGIN_MESSAGE", \
    5, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_origin_message_t, TimeUS) }, \
         { "Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_origin_message_t, Type) }, \
         { "Lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_origin_message_t, Lat) }, \
         { "Lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_origin_message_t, Lon) }, \
         { "Alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_origin_message_t, Alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ORIGIN_MESSAGE { \
    "ORIGIN_MESSAGE", \
    5, \
    {  { "TimeUS", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_origin_message_t, TimeUS) }, \
         { "Type", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_origin_message_t, Type) }, \
         { "Lat", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_origin_message_t, Lat) }, \
         { "Lon", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_origin_message_t, Lon) }, \
         { "Alt", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_origin_message_t, Alt) }, \
         } \
}
#endif

/**
 * @brief Pack a origin_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param TimeUS   Time.
 * @param Type   Origin Type.
 * @param Lat   Origin Latitude.
 * @param Lon   Origin Longitude.
 * @param Alt   Origin Altitude.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_origin_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t TimeUS, uint8_t Type, int32_t Lat, int32_t Lon, int32_t Alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_int32_t(buf, 8, Lat);
    _mav_put_int32_t(buf, 12, Lon);
    _mav_put_int32_t(buf, 16, Alt);
    _mav_put_uint8_t(buf, 20, Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#else
    mavlink_origin_message_t packet;
    packet.TimeUS = TimeUS;
    packet.Lat = Lat;
    packet.Lon = Lon;
    packet.Alt = Alt;
    packet.Type = Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ORIGIN_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
}

/**
 * @brief Pack a origin_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param TimeUS   Time.
 * @param Type   Origin Type.
 * @param Lat   Origin Latitude.
 * @param Lon   Origin Longitude.
 * @param Alt   Origin Altitude.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_origin_message_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t TimeUS, uint8_t Type, int32_t Lat, int32_t Lon, int32_t Alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_int32_t(buf, 8, Lat);
    _mav_put_int32_t(buf, 12, Lon);
    _mav_put_int32_t(buf, 16, Alt);
    _mav_put_uint8_t(buf, 20, Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#else
    mavlink_origin_message_t packet;
    packet.TimeUS = TimeUS;
    packet.Lat = Lat;
    packet.Lon = Lon;
    packet.Alt = Alt;
    packet.Type = Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ORIGIN_MESSAGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#endif
}

/**
 * @brief Pack a origin_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param TimeUS   Time.
 * @param Type   Origin Type.
 * @param Lat   Origin Latitude.
 * @param Lon   Origin Longitude.
 * @param Alt   Origin Altitude.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_origin_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t TimeUS,uint8_t Type,int32_t Lat,int32_t Lon,int32_t Alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_int32_t(buf, 8, Lat);
    _mav_put_int32_t(buf, 12, Lon);
    _mav_put_int32_t(buf, 16, Alt);
    _mav_put_uint8_t(buf, 20, Type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#else
    mavlink_origin_message_t packet;
    packet.TimeUS = TimeUS;
    packet.Lat = Lat;
    packet.Lon = Lon;
    packet.Alt = Alt;
    packet.Type = Type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ORIGIN_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
}

/**
 * @brief Encode a origin_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param origin_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_origin_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_origin_message_t* origin_message)
{
    return mavlink_msg_origin_message_pack(system_id, component_id, msg, origin_message->TimeUS, origin_message->Type, origin_message->Lat, origin_message->Lon, origin_message->Alt);
}

/**
 * @brief Encode a origin_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param origin_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_origin_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_origin_message_t* origin_message)
{
    return mavlink_msg_origin_message_pack_chan(system_id, component_id, chan, msg, origin_message->TimeUS, origin_message->Type, origin_message->Lat, origin_message->Lon, origin_message->Alt);
}

/**
 * @brief Encode a origin_message struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param origin_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_origin_message_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_origin_message_t* origin_message)
{
    return mavlink_msg_origin_message_pack_status(system_id, component_id, _status, msg,  origin_message->TimeUS, origin_message->Type, origin_message->Lat, origin_message->Lon, origin_message->Alt);
}

/**
 * @brief Send a origin_message message
 * @param chan MAVLink channel to send the message
 *
 * @param TimeUS   Time.
 * @param Type   Origin Type.
 * @param Lat   Origin Latitude.
 * @param Lon   Origin Longitude.
 * @param Alt   Origin Altitude.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_origin_message_send(mavlink_channel_t chan, uint64_t TimeUS, uint8_t Type, int32_t Lat, int32_t Lon, int32_t Alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_int32_t(buf, 8, Lat);
    _mav_put_int32_t(buf, 12, Lon);
    _mav_put_int32_t(buf, 16, Alt);
    _mav_put_uint8_t(buf, 20, Type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE, buf, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#else
    mavlink_origin_message_t packet;
    packet.TimeUS = TimeUS;
    packet.Lat = Lat;
    packet.Lon = Lon;
    packet.Alt = Alt;
    packet.Type = Type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a origin_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_origin_message_send_struct(mavlink_channel_t chan, const mavlink_origin_message_t* origin_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_origin_message_send(chan, origin_message->TimeUS, origin_message->Type, origin_message->Lat, origin_message->Lon, origin_message->Alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE, (const char *)origin_message, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_origin_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t TimeUS, uint8_t Type, int32_t Lat, int32_t Lon, int32_t Alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, TimeUS);
    _mav_put_int32_t(buf, 8, Lat);
    _mav_put_int32_t(buf, 12, Lon);
    _mav_put_int32_t(buf, 16, Alt);
    _mav_put_uint8_t(buf, 20, Type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE, buf, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#else
    mavlink_origin_message_t *packet = (mavlink_origin_message_t *)msgbuf;
    packet->TimeUS = TimeUS;
    packet->Lat = Lat;
    packet->Lon = Lon;
    packet->Alt = Alt;
    packet->Type = Type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ORIGIN_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_ORIGIN_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN, MAVLINK_MSG_ID_ORIGIN_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE ORIGIN_MESSAGE UNPACKING


/**
 * @brief Get field TimeUS from origin_message message
 *
 * @return   Time.
 */
static inline uint64_t mavlink_msg_origin_message_get_TimeUS(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field Type from origin_message message
 *
 * @return   Origin Type.
 */
static inline uint8_t mavlink_msg_origin_message_get_Type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field Lat from origin_message message
 *
 * @return   Origin Latitude.
 */
static inline int32_t mavlink_msg_origin_message_get_Lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field Lon from origin_message message
 *
 * @return   Origin Longitude.
 */
static inline int32_t mavlink_msg_origin_message_get_Lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field Alt from origin_message message
 *
 * @return   Origin Altitude.
 */
static inline int32_t mavlink_msg_origin_message_get_Alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Decode a origin_message message into a struct
 *
 * @param msg The message to decode
 * @param origin_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_origin_message_decode(const mavlink_message_t* msg, mavlink_origin_message_t* origin_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    origin_message->TimeUS = mavlink_msg_origin_message_get_TimeUS(msg);
    origin_message->Lat = mavlink_msg_origin_message_get_Lat(msg);
    origin_message->Lon = mavlink_msg_origin_message_get_Lon(msg);
    origin_message->Alt = mavlink_msg_origin_message_get_Alt(msg);
    origin_message->Type = mavlink_msg_origin_message_get_Type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN;
        memset(origin_message, 0, MAVLINK_MSG_ID_ORIGIN_MESSAGE_LEN);
    memcpy(origin_message, _MAV_PAYLOAD(msg), len);
#endif
}
