// MESSAGE ORIGIN_MESSAGE support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief ORIGIN_MESSAGE message
 *
 *  Origin Message Data
 */
struct ORIGIN_MESSAGE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 52311;
    static constexpr size_t LENGTH = 21;
    static constexpr size_t MIN_LENGTH = 21;
    static constexpr uint8_t CRC_EXTRA = 0;
    static constexpr auto NAME = "ORIGIN_MESSAGE";


    uint64_t TimeUS; /*<   Time. */
    uint8_t Type; /*<   Origin Type. */
    int32_t Lat; /*<   Origin Latitude. */
    int32_t Lon; /*<   Origin Longitude. */
    int32_t Alt; /*<   Origin Altitude. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  TimeUS: " << TimeUS << std::endl;
        ss << "  Type: " << +Type << std::endl;
        ss << "  Lat: " << Lat << std::endl;
        ss << "  Lon: " << Lon << std::endl;
        ss << "  Alt: " << Alt << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << TimeUS;                        // offset: 0
        map << Lat;                           // offset: 8
        map << Lon;                           // offset: 12
        map << Alt;                           // offset: 16
        map << Type;                          // offset: 20
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> TimeUS;                        // offset: 0
        map >> Lat;                           // offset: 8
        map >> Lon;                           // offset: 12
        map >> Alt;                           // offset: 16
        map >> Type;                          // offset: 20
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
