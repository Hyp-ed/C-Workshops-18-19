#ifndef RECTANGLE_
#define RECTANGLE_

class Rectangle {
 public:
 /**
  * @brief Construct a new Rectangle object
  */
  Rectangle(int height, int width);
  /**
   * @brief returns the area of the rectangle
   */
  int area();
  /**
   * @brief Get the Width object
   * 
   * @return int 
   */
  int getWidth();
  /**
   * @brief Set the Width object
   * 
   * @param width 
   */
  void setWidth(int width);
  /**
   * @brief Get the Height object
   * 
   * @return int 
   */
  int getHeight();
  /**
   * @brief Set the Height object
   * 
   * @param height 
   */
  void setHeight(int height);

 private:
  int width_, height_;
};

#endif  // RECTANGLE_