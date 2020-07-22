const dirIcon = Vue.prototype.$global.board.board_info.dir;

module.exports = {
    name: "WiFi",
    index: 2,
    color: "30",
    icon: `file:///${dirIcon}/static/icons/wifi.png`,
    blocks: [
            'wifi_connect',    
            'wifi_ap',
            // {
            //     xml : 
            //         `<block type="wifi_http_get">
            //             <value name="url">
            //                 <shadow type="basic_string">
            //                     <field name="VALUE">Hello world!</field>
            //                 </shadow>
            //             </value>
            //         </block>`
            // },
            // {
            //     xml : 
            //         `<block type="wifi_http_post">
            //             <value name="url">
            //                 <shadow type="basic_string">
            //                     <field name="VALUE">Hello world!</field>
            //                 </shadow>
            //             </value>
            //             <value name="data">
            //                 <shadow type="basic_string">
            //                     <field name="VALUE">Hello world!</field>
            //                 </shadow>
            //             </value>
            //         </block>`
            // },                   
            'wifi_start_server',
            'wifi_server_on',
            {
                xml : 
                    `<block type="wifi_server_send">
                        <value name="text">
                            <shadow type="basic_string">
                                <field name="VALUE">Hello world!</field>
                            </shadow>
                        </value>
                    </block>`
            },
            
            'wifi_get_ip_addr',
            'wifi_get_ap_ip_addr',
            'wifi_get_arg'
        ]
  };
  