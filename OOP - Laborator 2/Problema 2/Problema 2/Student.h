#pragma once
class Student {
  private:
    char name[20];
    float Mathematics;
    float English;
    float History;

  public:
    void SetName(const char* name);
    const char* GetName() const;
    void SetMathematics(const float Mathematics);
    const float GetMathematics() const;
    void SetEnglish(const float English);
    const float GetEnglish() const;
    void SetHistory(const float History);
    const float GetHistory() const;
    const float GetAverage() const;
};