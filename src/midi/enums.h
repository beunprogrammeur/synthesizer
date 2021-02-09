#pragma once
#include <stdint.h>
namespace BOSSCorp::Midi
{

enum class Channel : uint8_t 
{
    Channel1  = 0,
    Channel2  = 1,
    Channel3  = 2,
    Channel4  = 3,
    Channel5  = 4,
    Channel6  = 5,
    Channel7  = 6,
    Channel8  = 7,
    Channel9  = 8,
    Channel10 = 9,
    Channel11 = 10,
    Channel12 = 11,
    Channel13 = 12,
    Channel14 = 13,
    Channel15 = 14,
    Channel16 = 15,
};

enum class Note : uint8_t 
{
	A      = 0,
	ASharp = 1,
	BFlat  = 1,
	B      = 2,
	CFlat  = 2,
	BSharp = 3,
	C      = 3,
	CSharp = 4,
	DFlat  = 4,
	D      = 5,
	DSharp = 6,
	EFlat  = 6,
	E      = 7,
	FFlat  = 7,
	ESharp = 8,
	F      = 8,
	FSharp = 9,
	GFlat  = 9,
	G      = 10,
	GSharp = 11,
};

// see https://www.midi.org/specifications-old/item/table-1-summary-of-midi-message

enum class Status : uint8_t
{
    // Channel voice messages. 0b.dddd.nnnn
    // Where d = data bit, n = channel.
    NoteOn          = 0b10000000,
    NoteOff         = 0b10010000,
    AfterTouch      = 0b10100000,
    ControlChange   = 0b10110000,
    ProgramChange   = 0b11000000,
    ChannelPressure = 0b11010000,
    PitchBendChange = 0b11100000,

    // System common messages. there is no channel denotion in these values.
    SystemExclusive          = 0b11110000, // Proprietary manufacturer messages.
    MidiTimeCodeQuarterFrame = 0b11110001,
    SongPositionPointer      = 0b11110010,
    SongSelect               = 0b11110110,
    Undefined1               = 0b11110100,
    Undefined2               = 0b11110101,
    TuneRequest              = 0b11110110,
    EndOfExclusive           = 0b11110111,

    // System real-time messages
    TimingClock      = 0b11111000,
    Undefined        = 0b11111001,
    StartSequence    = 0b11111010,
    ContinueSequence = 0b11111011,
    StopSequence     = 0b11111100,
    Undefined3       = 0b11111101,
    ActiveSensing    = 0b11111110, // keep alive signal. optional. if you send this one, the other end expects another one within 300ms max.
    Reset            = 0b11111111, // Should reset the device to cold boot state.
};

enum class CC : uint8_t
{
    BankSelect = 0,
    ModulationWheel = 1,
    BreathController = 2,
    Undefined3 = 3,
    FootPedal = 4,
    PortamentoTime = 5,
    DataEntry = 6,
    Volume = 7,
    Balance = 8,
    Undefined9 = 9,
    PanPosition = 10,
    Expression = 11,
    EffectControl1 = 12,
    EffectControl2 = 13,
    Undefined14 = 14,
    Undefined15 = 15,
    GeneralPurpose16 = 16,
    GeneralPurpose17 = 17,
    GeneralPurpose18 = 18,
    GeneralPurpose19 = 19,
    Undefined20 = 20,
    Undefined21 = 21,
    Undefined22 = 22,
    Undefined23 = 23,
    Undefined24 = 24,
    Undefined25 = 25,
    Undefined26 = 26,
    Undefined27 = 27,
    Undefined28 = 28,
    Undefined29 = 29,
    Undefined30 = 30,
    Undefined31 = 31,
    Controller32 = 32,
    Controller33 = 33,
    Controller34 = 34,
    Controller35 = 35,
    Controller36 = 36,
    Controller37 = 37,
    Controller38 = 38,
    Controller39 = 39,
    Controller40 = 40,
    Controller41 = 41,
    Controller42 = 42,
    Controller43 = 43,
    Controller44 = 44,
    Controller45 = 45,
    Controller46 = 46,
    Controller47 = 47,
    Controller48 = 48,
    Controller49 = 49,
    Controller50 = 50,
    Controller51 = 51,
    Controller52 = 52,
    Controller53 = 53,
    Controller54 = 54,
    Controller55 = 55,
    Controller56 = 56,
    Controller57 = 57,
    Controller58 = 58,
    Controller59 = 59,
    Controller60 = 60,
    Controller61 = 61,
    Controller62 = 62,
    Controller63 = 63,
    Hold = 64,
    Portamento = 65,
    Sostenuto = 66,
    Soft = 67,
    Legato = 68,
    Hold2 = 69,
    SoundVariation = 70,
    Resonance = 71,
    SoundReleaseTime = 72,
    SoundAttackTime = 73,
    LowPassFilterFrequency = 74,
    SoundControl6 = 75,
    SoundControl7 = 76,
    SoundControl8 = 77,
    SoundControl9 = 78,
    SoundControl10 = 79,
    SoundDecayTime = 80,
    HighPassFilterFrequency = 81,
    GeneralPurposeButton3 = 82,
    GeneralPurposeButton4 = 83,
    PortamentoAmount = 84,
    Undefined85 = 85,
    Undefined86 = 86,
    Undefined87 = 87,
    Undefined88 = 88,
    Undefined89 = 89,
    Undefined90 = 90,
    ReverbLevel = 91,
    TremeloLevel = 92,
    ChorusLevel = 93,
    DetuneLevel = 94,
    PhaserLevel = 95,
    DataButtonIncrement = 96,
    DataButtonDecrement = 97,
    NonRegisteredParameterLSB = 98,
    NonRegisteredParameterMSB = 99,
    RegisteredParameterLSB = 100,
    RegisteredParameterMSB = 101,
    Undefined102 = 102,
    Undefined103 = 103,
    Undefined104 = 104,
    Undefined105 = 105,
    Undefined106 = 106,
    Undefined107 = 107,
    Undefined108 = 108,
    Undefined109 = 109,
    Undefined110 = 110,
    Undefined111 = 111,
    Undefined112 = 112,
    Undefined113 = 113,
    Undefined114 = 114,
    Undefined115 = 115,
    Undefined116 = 116,
    Undefined117 = 117,
    Undefined118 = 118,
    Undefined119 = 119,

    // Channel mode messages
    AllSoundOff = 120,
    AllControllersOff = 121,
    LocalKeyboardOnOff = 122,
    AllNotesOff = 123,
    OmniModeOff = 124,
    OmniModeOn = 125,
    MonoMode = 126,
    PolyMode = 127,
};
} // namespace BOSSCorp::Midi