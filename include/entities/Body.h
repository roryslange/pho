class Body {
    private:
    float xCoordinate_;
    float yCoordinate_;

    public:
    Body(int x, int y);
    Body(Body& body);
    Body(Body&& body);
    Body();
    ~Body();
    void setXCoordinate(float x);
    const float getXCoordinate();
    void setYCoordinate(float y);
    const float getYCoordinate();
};