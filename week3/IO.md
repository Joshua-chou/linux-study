# I/O

## fwrite()

#### 函数原型

>size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)

#### 参数

>* **ptr**-- 这是指向要被写入的元素数组的指针。
>* **size**-- 这是要被写入的每个元素的大小，以字节为单位。
>* **nmemb**-- 这是元素的个数，每个元素的大小为 size 字节。
>* **stream**-- 这是指向 FILE 对象的指针，该 FILE 对象指定了一个输出流。

#### 功能

>把**ptr**所指向的数组中的数据写入到给定流**stream**中。

#### 用法

>size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
>
>返回值：返回实际写入的[数据块](https://baike.baidu.com/item/数据块)数目
>
>（1）buffer：是一个[指针](https://baike.baidu.com/item/指针)，对fwrite来说，是要获取数据的地址；
>
>（2）size：要写入内容的单字节数；
>
>（3）count:要进行写入size字节的[数据项](https://baike.baidu.com/item/数据项)的个数；
>
>（4）stream:目标[文件指针](https://baike.baidu.com/item/文件指针)；
>
>（5）返回实际写入的数据项个数count。

## 文件操作

1. 由操作系统提供，基于文件操作符，更为底层，windows不支持
2. 由c标准函数库提供的，基于FILE流的，API
3. 董鹏翔ip：139.9.118.115