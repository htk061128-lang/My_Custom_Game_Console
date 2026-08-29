#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <cstdint>
#include <string>

//g++ main.cpp -o wav_gen
//./wav_gen

// 1. WAV 헤더 구조 정의 (바이트 정렬 강제)
#pragma pack(push, 1)
struct WAVHeader {
    char chunkID[4] = {'R', 'I', 'F', 'F'};
    uint32_t chunkSize; //전체 파일 크기에서 헤더의 앞 8바이트를 뺀 값.
    char format[4] = {'W', 'A', 'V', 'E'};
    char subchunk1ID[4] = {'f', 'm', 't', ' '};
    uint32_t subchunk1Size = 16; //PCM 방식(무압축)일 경우 이 정보 영역의 크기는 항상 16입니다.
    uint16_t audioFormat = 1; // PCM
    uint16_t numChannels = 1; // Mono. 1은 모노(스피커 1개), 2는 스테레오입니다.
    uint32_t sampleRate = 15000;
    uint32_t byteRate; //1초당 몇 바이트가 소모되는지입니다. (sampleRate * channels * 1)
    uint16_t blockAlign; //한 번에 처리되는 바이트 단위입니다. (8비트 모노는 1바이트)
    uint16_t bitsPerSample = 8;
    char subchunk2ID[4] = {'d', 'a', 't', 'a'};
    uint32_t subchunk2Size; //순수한 소리 데이터(audioData)의 총 바이트 크기입니다.
};
#pragma pack(pop)

// 2. WAV 기록 관리 클래스
class WavRecorder {
private:
    WAVHeader header;
    std::vector<uint8_t> audioData;
    uint32_t sampleRate;

public:
    WavRecorder(uint32_t rate = 15000) : sampleRate(rate) {
        // 기본 헤더 값 미리 설정
        header.sampleRate = rate;
        header.bitsPerSample = 8;
        header.numChannels = 1;
        header.byteRate = rate * 1 * (8 / 8);
        header.blockAlign = 1 * (8 / 8);
    }

    // 샘플을 하나씩 추가하는 함수 (에뮬레이터 루프에서 사용)
    void addSample(uint8_t sample) {
        audioData.push_back(sample);
    }

    // 파일로 저장하는 함수
    bool saveToFile(const std::string& filename) {
        header.subchunk2Size = static_cast<uint32_t>(audioData.size());
        header.chunkSize = 36 + header.subchunk2Size;

        std::ofstream file(filename, std::ios::binary);
        if (!file.is_open()) {
            std::cerr << "에러: 파일을 열 수 없습니다: " << filename << std::endl;
            return false;
        }

        // 헤더와 데이터를 바이너리로 기록
        file.write(reinterpret_cast<const char*>(&header), sizeof(header));
        file.write(reinterpret_cast<const char*>(audioData.data()), audioData.size());
        
        file.close();
        std::cout << "\n[저장 완료] " << filename << " (" << audioData.size() << " bytes)" << std::endl;
        return true;
    }
};

int main() {
    // 사용 예시
    WavRecorder recorder(15000);
    int freq;

    std::cout << "소리 데이터를 생성 중..." << std::endl;

    freq = 262; //도
    for (int i = 0; i < 15000; ++i) { //1초간 출력
        double time = static_cast<double>(i) / 15000.0;
        // 8비트 사인파 생성 (중간값 128)
        uint8_t s = static_cast<uint8_t>(128 + (60 * std::sin(2.0 * M_PI * freq * time)));
        recorder.addSample(s);
    }
    freq = 294; //레
    for (int i = 0; i < 15000; ++i) {
        double time = static_cast<double>(i) / 15000.0;
        // 8비트 사인파 생성 (중간값 128)
        uint8_t s = static_cast<uint8_t>(128 + (60 * std::sin(2.0 * M_PI * freq * time)));
        recorder.addSample(s);
    }
    freq = 330; //미
    for (int i = 0; i < 15000; ++i) {
        double time = static_cast<double>(i) / 15000.0;
        // 8비트 사인파 생성 (중간값 128)
        uint8_t s = static_cast<uint8_t>(128 + (60 * std::sin(2.0 * M_PI * freq * time)));
        recorder.addSample(s);
    }
    freq = 349; //파
    for (int i = 0; i < 15000; ++i) {
        double time = static_cast<double>(i) / 15000.0;
        // 8비트 사인파 생성 (중간값 128)
        uint8_t s = static_cast<uint8_t>(128 + (60 * std::sin(2.0 * M_PI * freq * time)));
        recorder.addSample(s);
    }
    freq = 392; //솔
    for (int i = 0; i < 15000; ++i) {
        double time = static_cast<double>(i) / 15000.0;
        // 8비트 사인파 생성 (중간값 128)
        uint8_t s = static_cast<uint8_t>(128 + (60 * std::sin(2.0 * M_PI * freq * time)));
        recorder.addSample(s);
    }

    recorder.saveToFile("test_8bit_class.wav");

    return 0;
}
