#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>

#include <stdio.h>
int main(int argc,charg *argv[])
{
    av_register_all();
    AVFormatContext *pFormatCtx = Null;
    if(avformat_open_input(&pFormatCtx, argv[1], NULL, 0, NULL)!=0)
    {
        return -1;
    }
    if (avformat_find_stream_info(*pFormatCtx,NULL)<0)
    {
        return -1;
    }
    av_dump_format(pFormatCtx, 0, argv[1], 0);
    int i;
    AVCodecContext *pCodecCtxOrig = NULL;
    AVCodecContext *pCodecCtx = NULL;

    // Find the first video stream
    videoStream=-1;
    for(i=0; i<pFormatCtx->nb_streams; i++)
    if(pFormatCtx->streams[i]->codec->codec_type==AVMEDIA_TYPE_VIDEO) {
        videoStream=i;
        break;
    } 
    if(videoStream==-1)
        return -1; // Didn't find a video stream

    // Get a pointer to the codec context for the video stream
    pCodecCtx=pFormatCtx->streams[videoStream]->codec;
    


}