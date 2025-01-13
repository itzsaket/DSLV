// MESSAGE CHALGAI support class

#pragma once

namespace mavlink {
namespace ardupilotmega {
namespace msg {

/**
 * @brief CHALGAI message
 *
 * oo chal gai oo
 */
struct CHALGAI : mavlink::Message {
    static constexpr msgid_t MSG_ID = 11045;
    static constexpr size_t LENGTH = 43;
    static constexpr size_t MIN_LENGTH = 43;
    static constexpr uint8_t CRC_EXTRA = 81;
    static constexpr auto NAME = "CHALGAI";


    uint64_t TimeUS; /*<  microsecond */
    float innovDragX; /*<  DragX */
    float innovDragY; /*<  DragY */
    float innovSideslip; /*<  sideslip */
    int16_t accbiasX; /*<  AZbias X */
    int16_t accbiasY; /*<  AZbias Y */
    int16_t accbiasZ; /*<  AZbias Z */
    int16_t windN; /*<  wind N */
    int16_t windE; /*<  wind D */
    int16_t magN; /*<  magN */
    int16_t magE; /*<  magE */
    int16_t magD; /*<  magD */
    int16_t magX; /*<  magX */
    int16_t magY; /*<  magY */
    int16_t magZ; /*<  magZ */
    uint8_t Core; /*<  core */


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
        ss << "  innovDragX: " << innovDragX << std::endl;
        ss << "  innovDragY: " << innovDragY << std::endl;
        ss << "  innovSideslip: " << innovSideslip << std::endl;
        ss << "  accbiasX: " << accbiasX << std::endl;
        ss << "  accbiasY: " << accbiasY << std::endl;
        ss << "  accbiasZ: " << accbiasZ << std::endl;
        ss << "  windN: " << windN << std::endl;
        ss << "  windE: " << windE << std::endl;
        ss << "  magN: " << magN << std::endl;
        ss << "  magE: " << magE << std::endl;
        ss << "  magD: " << magD << std::endl;
        ss << "  magX: " << magX << std::endl;
        ss << "  magY: " << magY << std::endl;
        ss << "  magZ: " << magZ << std::endl;
        ss << "  Core: " << +Core << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << TimeUS;                        // offset: 0
        map << innovDragX;                    // offset: 8
        map << innovDragY;                    // offset: 12
        map << innovSideslip;                 // offset: 16
        map << accbiasX;                      // offset: 20
        map << accbiasY;                      // offset: 22
        map << accbiasZ;                      // offset: 24
        map << windN;                         // offset: 26
        map << windE;                         // offset: 28
        map << magN;                          // offset: 30
        map << magE;                          // offset: 32
        map << magD;                          // offset: 34
        map << magX;                          // offset: 36
        map << magY;                          // offset: 38
        map << magZ;                          // offset: 40
        map << Core;                          // offset: 42
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> TimeUS;                        // offset: 0
        map >> innovDragX;                    // offset: 8
        map >> innovDragY;                    // offset: 12
        map >> innovSideslip;                 // offset: 16
        map >> accbiasX;                      // offset: 20
        map >> accbiasY;                      // offset: 22
        map >> accbiasZ;                      // offset: 24
        map >> windN;                         // offset: 26
        map >> windE;                         // offset: 28
        map >> magN;                          // offset: 30
        map >> magE;                          // offset: 32
        map >> magD;                          // offset: 34
        map >> magX;                          // offset: 36
        map >> magY;                          // offset: 38
        map >> magZ;                          // offset: 40
        map >> Core;                          // offset: 42
    }
};

} // namespace msg
} // namespace ardupilotmega
} // namespace mavlink
